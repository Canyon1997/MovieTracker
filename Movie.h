#pragma once
#include <stdio.h>
#include <iostream>

using namespace std;

class Movie {

private:

	string MovieName;
	string MovieRating;
	int WatchCount;


public:

	Movie(string Name, string Rating, int TimesWatched)
		: MovieName{ Name }, MovieRating{ Rating }, WatchCount{ TimesWatched } {}

	/// @brief Increments the watch count by one
	void IncrementWatchCount() { WatchCount++; }

	/// @brief Returns the watch count of the movie
	/// return:
	///     The WatchCount integer
	int GetWatchCount() const { return WatchCount; }

};