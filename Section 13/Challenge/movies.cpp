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
    for (const Movie &movie: movies) 
        if (movie.get_name() == name) {
            std::cout << "Error: " << name << " already exists." << std::endl;
            return false;
        }
    movies.push_back(Movie{name, rating, watched});
    std::cout << name << " added." << std::endl;
    return true;
}

bool Movies::increment_watched(std::string name) {
    for (Movie &movie: movies) 
        if (movie.get_name() == name) {
            movie.increment_watched();
            std::cout << name << " watched." << std::endl;
            return true;
        }
    std::cout << "Error: " << name << " does not exist." << std::endl;
    return false;
}

void Movies::display() const {
    if (movies.size() == 0) {
        std::cout << "No movies to display." << std::endl;
    } else {
        std::cout << "===================================================" << std::endl;
        std::cout << "Movies:" << std::endl;
        for (const Movie &movie : movies)
            movie.display();
        std::cout << "===================================================" << std::endl;
    }
}


