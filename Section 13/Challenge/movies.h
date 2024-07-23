/******************************************************************
 * Section 13 Challenge
 * Movies.h
 * 
 * Models a collection of Movies as a std::vector
 * 
 * ***************************************************************/

#ifndef _MOVIES_H
#define _MOVIES_H

#include <string>
#include <vector>
#include "movie.h"

class Movie;

class Movies {
private:
    std::vector<Movie> movies;
public:
    // Constructors and Destructor
    Movies();

    ~Movies();

    // Methods
    bool add_movie(std::string name, std::string rating, int watched = 0);

    bool increment_watched(std::string name);

    void display() const;
};

#endif