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
#include "Movie.h"

class Movie;

class Movies {
private:
    std::vector<Movie> movies;
public:
};

#endif