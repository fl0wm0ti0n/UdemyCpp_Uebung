#include <iostream>

using namespace std;

int main()
{

	char auswahl;
	cout << "Waehle einen Schokoriegel (a-d): ";
	cin >> auswahl;

	
		switch (auswahl)
		{
		case 'a': cout << "Du erh�ltst einen Aounty" << endl; break;
		case 'b': cout << "Du erh�ltst einen Bwix" << endl; break;
		case 'c': cout << "Du erh�ltst einen Chickers" << endl; break;
		case 'd': cout << "Du erh�ltst einen Dwist" << endl; break;
		default: cout << "Falsche eingabe" << endl;
		}

	return 0;
}