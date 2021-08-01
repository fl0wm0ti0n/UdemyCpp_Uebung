#include <iostream>

using namespace std;

int main()
{

	char auswahl;
	cout << "Waehle einen Schokoriegel (a-d): ";
	cin >> auswahl;

	
		switch (auswahl)
		{
		case 'a': cout << "Du erhältst einen Aounty" << endl; break;
		case 'b': cout << "Du erhältst einen Bwix" << endl; break;
		case 'c': cout << "Du erhältst einen Chickers" << endl; break;
		case 'd': cout << "Du erhältst einen Dwist" << endl; break;
		default: cout << "Falsche eingabe" << endl;
		}

	return 0;
}