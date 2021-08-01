//#include <iostream>
//
//using namespace std;
//
//void f1(int number)
//{
//	number++;
//}
//
//
//
//int main()
//{
//
//	unsigned int array_size = 10;
//	unsigned const int const_array_size = 10;
//
//	// Konstante Speicherreservierung am Stack
//	int ac[const_array_size] = { };
//
//	// Heap Allocation
//
//	// Normale Speicherreservierung am Heap
//	int* p = new int{ 10 };
//
//	// Array Dynamische  Speicherreservierung am Heap
//	int* ad = new int[array_size];
//	
//
//	for (int i = 0; i < array_size; i++)
//	{
//		ad[i] = i;
//	}
//
//	for (int i = 0; i < array_size; i++)
//	{
//		cout << ad[i] << " " << &ad[i] << endl;
//	}
//
//
//	// Heap De-Allocation
//	delete[] ad;
//	delete p;
//
//	return 0;
//}