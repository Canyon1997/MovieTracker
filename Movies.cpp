#include "Movies.h"



void Movies::AddMovie()
{
	string Name;
	string Rating;
	int TimesWatched = 0;

	cout << "Movie Name: ";
	cin >> Name;

	cout << "Movie Rating: ";
	cin >> Rating;

	cout << "Times movie has been watched: ";
	cin >> TimesWatched;

	map<string, Movie>::iterator itr;
	itr = MovieList.find(Name);

	if (itr == MovieList.end())
	{
		cout << "Movie is already in the list" << endl;
		return;
	}

	Movie NewMovie(Name, Rating, TimesWatched);
	MovieList.insert(pair<string, Movie>(Name, NewMovie));
}



void Movies::IncreaseMovieWatchCount()
{
	string Name;

	cout << "Movie name: ";
	cin >> Name;

	map<string, Movie>::iterator movie;
	movie = MovieList.find(Name);

	if (movie != MovieList.end())
	{
		movie->second.IncrementWatchCount();
		cout << movie->first << " increased its watch count by 1 to " << movie->second.GetWatchCount() << endl;
		return;
	}


	cout << "Movie not found" << endl;
}



void Movies::DisplayAllMovies()
{
	map<string, Movie>::iterator itr;

	for (itr = MovieList.begin(); itr != MovieList.end(); itr++)
	{
		cout << itr->first << endl;
	}
}