#include <iostream>
#include "exercise.h"

using std::cout;
using std::endl;

// In eurem Programm bitte:
// your_main zu main ändern
int main()
{
	// Aufgabe 1
	auto* array = new double[100];
	for (int i = 0; i < 100; ++i)
	{
		array[i] = i;
	}
	
	auto sum = array_sum(array, 99);
	cout << sum << endl;
	
	// Aufgabe 2
	auto* array2 = array_constructor(3, 5);

	for (int i = 0; i < 5; ++i)
	{
		cout << array2[i] << endl;
	}


	return 0;
}