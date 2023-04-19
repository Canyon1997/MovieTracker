#include "Movies.h"



void Movies::AddMovie()
{
	string Name;
	string Rating;
	int TimesWatched = 0;

	cout << "Movie Name: " << endl;
	getline(cin, Name);

	cout << "\n";

	cout << "Movie Rating: ";
	getline(cin, Rating);

	cout << "\n";

	cout << "Times movie has been watched: ";
	cin >> TimesWatched;

	map<string, Movie>::iterator itr;
	itr = MovieList.find(Name);

	if (itr != MovieList.end())
	{
		cout << "Movie is already in the list\n\n" << endl;
		return;
	}

	Movie NewMovie(Name, Rating, TimesWatched);
	MovieList.insert({ Name, NewMovie });

	cout << "\n\n" << endl;
}



void Movies::IncreaseMovieWatchCount()
{
	string Name;

	cout << "Movie name" << endl;
	getline(cin, Name);

	map<string, Movie>::iterator movie;
	movie = MovieList.find(Name);

	if (movie != MovieList.end())
	{
		movie->second.IncrementWatchCount();
		cout << movie->first << " increased its watch count by 1 to being watched " << movie->second.GetWatchCount() << " times." << endl;
		cout << "\n\n" << endl;
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

	cout << "\n\n" << endl;
}