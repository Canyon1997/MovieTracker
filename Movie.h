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


	void IncrementWatchCount() { WatchCount++; }

	int GetWatchCount() const { return WatchCount; }

};