#pragma once
#include "Movie.h"
#include "stdlib.h"
#include <string>
#include <map>

using namespace std;

class Movies
{
private:
	map<string, Movie> MovieList;

public:

	/// @brief Adds a movie to the Movie List
	void AddMovie();

	/// @brief Increases the watch count of an existing movie in the Movie List by 1
	void IncreaseMovieWatchCount();

	/// @brief Displays all the movies that are in the Movie List
	void DisplayAllMovies();
};


