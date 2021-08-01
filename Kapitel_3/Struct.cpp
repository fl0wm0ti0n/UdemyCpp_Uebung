#include <iostream>

using namespace std;


struct Film
{
	int jahr;
	const char* titel;
	const char* regisseur;


};



int main()
{

	Film star_wars_8;

	star_wars_8.titel = "Starwars The Last Jedi";
	
	return 0;
}