/******************************************************************
 * Section 13 Challenge
 * Movie.h
 * 
 * Models a Movie with the following atttributes
 * 
 * std::string name - the name of the movie 
 * std::string rating - G, PG, PG-13, R
 * int watched - the number of times you've watched the movie
 * ***************************************************************/

#ifndef _MOVIE_H
#define _MOVIE_H

#include <string>
#include "Movie.h"

class Movie {
private:
    std::string name;
    std::string rating;
    int watched;
public:
    // Constructors
    Movie(std::string name_val = "None", std::string rating_val = "0", int watched_val = 0);

    Movie(const Movie &source);

    ~Movie();

    // Getters and Setters
    std::string get_name() const { return name; }
    void set_name(std::string name) { this->name = name; }

    std::string get_rating() const { return rating; }
    void set_rating(std::string rating) { this->rating = rating; }

    int get_watched() const { return watched; }
    void set_watched(int watched) { this->watched = watched; }

    // Methods
    void increment_watched() { watched++; }

    void display() const;
};

#endif