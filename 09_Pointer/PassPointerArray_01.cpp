//#include <iostream>
//
//#define SIZE_OFF(n)	(sizeof(n) / sizeof(n[0]))
//
//using namespace std;
//
//void f1(int number)
//{
//	number++;
//}
//
//// int* input_array <=> int input_array[]
//int array_maximum(int* input_array, unsigned const int size)
//{
//	auto current_max_value = 0;
//
//	for (unsigned int i = 0; i < size; i++)
//	{
//		if (i == 0)
//		{
//			// input_array[i] <=> *(input_array + i)
//			current_max_value = input_array[i];
//		}
//		else if (input_array[i] > current_max_value)
//		{
//			current_max_value = input_array[i];
//		}
//	}
//	return current_max_value;
//}
//
//int main()
//{
//	unsigned const int array_size = 10;
//	auto next = 0;
//
//	// Heap Allocation
//	// Array Dynamische  Speicherreservierung am Heap
//	auto* ad = new int[array_size];
//	auto* p = new int{ 10 };
//	int ap[5] = { 1,2,3,4,5 };
//
//	// Sizeof von ad selber (Pointer) in Bytes (64bit Systeme = 8 byte) -> https://en.cppreference.com/w/cpp/language/types
//	cout << sizeof(ad) << endl;
//
//	// Sizeof the first array element, that the pointer points to
//	cout << sizeof(*ad) << endl;
//
//	// geht nur bei Array ohne Pointer
//	cout << SIZE_OFF(ap) << endl;
//
//	cout << SIZE_OFF(ad) << endl;
//
//	cout << SIZE_OFF(p) << endl;
//
//
//	ad[next++] = 1;
//	ad[next++] = 10;
//	ad[next++] = -10;
//	ad[next++] = 99;
//	ad[next++] = 120;
//	ad[next++] = 6;
//	ad[next++] = -3;
//	ad[next++] = 33;
//	ad[next++] = 0;
//	ad[next++] = -56;
//
//
//	//for (int i = 0; i < array_size; i++)
//	//{
//	//	ad[i] = i;
//	//}
//
//	for (unsigned int i = 0; i < array_size; i++)
//	{
//		cout << ad[i] << " " << &ad[i] << endl;
//	}
//
//
//	cout << array_maximum(ad, array_size) << endl;
//
//	// Heap De-Allocation
//	delete[] ad;
//
//	return 0;
//}