#include  <iostream>
#include "movies.h"

// Constructors and Destructor
Movies::Movies()
    : movies {} {
}

Movies::~Movies() {
}

// Methods
bool Movies::add_movie(std::string name, std::string rating, int watched) {
    for (auto movie: movies) 
        if (movie.get_name().compare(name) == 0) {
            std::cout << "Error: " << name << " already exists." << std::endl;
            return false;
        }
    movies.push_back(Movie{name, rating, watched});
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (auto movie: movies) 
        if (movie.get_name().compare(name) == 0) {
            movie.increment_watched();
            std::cout << name << " now watched " << movie.get_watched() << " times." << std::endl;
            return true;
        }
    std::cout << "Error: " << name << " does not exist." << std::endl;
    return false;
}

void Movies::display() const {
    std::cout << "Movies: ";
    for (size_t i {0}; i < movies.size(); i++) {
        size_t last_index = movies.size() - 1;
        auto movie = movies.at(i);
        std::cout << movie.get_name();
        if (i != last_index) std::cout << ", ";
    }
    std::cout << std::endl;
}


