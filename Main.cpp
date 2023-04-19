#include <iostream>
#include <stdio.h>
#include "Movies.h"

using namespace std;

void ProvidePrompt()
{
	cout << "Welcome to the Movie Tracker, Please select an option below!\n\n" << endl;

	cout << "1: Add a new movie\n" << endl;
	cout << "2: Increment watch count of an existing movie\n" << endl;
	cout << "3: Display all movies\n" << endl;
	cout << "4: Exit program\n" << endl;

}




int main()
{
	Movies MoviesObject;
	int UserAnswer = -1;


	while (UserAnswer != 4)
	{
		ProvidePrompt();
		cin >> UserAnswer;

		while (!isdigit(UserAnswer) || UserAnswer > 4 || UserAnswer < 1)
		{
			cout << "Please reselect a valid number option" << endl;
			cin >> UserAnswer;
		}

		switch (UserAnswer)
		{
		    case 1:
				MoviesObject.AddMovie();
			    break;

			case 2:
				MoviesObject.IncreaseMovieWatchCount();
				break;

			case 3:
				MoviesObject.DisplayAllMovies();
				break;

			case 4:
				return 0;

			default:
				break;
		}
	}

	return 0;
}