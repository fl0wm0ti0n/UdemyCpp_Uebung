#include <iostream>
#include "exercise.h"


// Aufgabe 1
void push_back(int*& input_array, const unsigned int& size, const int& value)
{
	int* tmp_array = nullptr;
	tmp_array = new int[size + 1];
	
	for (unsigned int i = 0; i < size; i++)
	{
		tmp_array[i] = input_array[i];
	}

	tmp_array[size] = value;
	delete[] input_array;
	input_array = tmp_array;
}

// Aufgabe 2
void pop_back(int*& input_array, const unsigned int& size)
{
	int* tmp_array = nullptr;
	tmp_array = new int[size - 1];

	for (unsigned int i = 0; i < size - 1; i++)
	{
		tmp_array[i] = input_array[i];
	}

	delete[] input_array;
	input_array = tmp_array;
}