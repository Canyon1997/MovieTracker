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

	void AddMovie();
	void IncreaseMovieWatchCount();
	void DisplayAllMovies();
};


