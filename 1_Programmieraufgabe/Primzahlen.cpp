//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	// Lest eine positive ganze zahl vom User ein
//	// Ueberprueft, ob diese Zahl eine Primzahl ist,
//	// Primzahlen: Nur durch sich selbst und 1 (ohen Rest) teilbar.
//	
//	unsigned int value1 = 0;
//	
//	cout << "Ueberpruefung auf Primzahlen!" << endl;
//
//	//// Variante 1
//	//do
//	//{
//	//	cout << "Gib eine Zahl ein: ";		
//	//	cin >> value1;
//	//	if(value1 % 2 != 0)
//	//	{
//	//		if (value1 % value1 == 0)
//	//		{
//	//			cout << "Die eingegebene Zahl " << value1 << " ist eine Primzahl";
//	//		}
//	//		else
//	//		{
//	//			cout << "Die eingegebene Zahl " << value1 << " ist KEINE Primzahl";
//	//		}
//	//	}
//	//	else
//	//	{
//	//		cout << "Die eingegebene Zahl " << value1 << " ist KEINE Primzahl";
//	//	}
//	//	cin.ignore(1);
//	//} while (cin.get() == '\n');
//
//
//	// Variante 2
//
//	//7
//	//[2,3,4,5,6]
//	bool isPrime = true;
//	
//	do
//	{
//		cout << "Gib eine Zahl ein: ";
//		cin >> value1;
//
//		for (int i = 2; i < value1; i++)
//		{
//			if(value1 % i == 0)
//			{
//				isPrime = false;
//				break;
//			}
//		}
//
//		if (isPrime == false)
//		{
//			cout << "Die eingegebene Zahl " << value1 << " ist KEINE Primzahl";
//			isPrime = true;
//		}
//		else
//		{
//			cout << "Die eingegebene Zahl " << value1 << " ist eine Primzahl";
//		}
//		
//		cin.ignore(1);
//	} while (cin.get() == '\n');
//
//
//	return 0;
//}