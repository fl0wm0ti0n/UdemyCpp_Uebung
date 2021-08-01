//#include <iostream>
//
//using namespace std;
//
//int main()
//{
//	//All Years which are perfectly divisible by 4 are leap years except for century years
//	// (Years ending with 00) which is leap year only it is perfectly divisible by 400
//
//
//	unsigned int year;
//
//	do
//	{
//		cin >> year;
//
//		cout << "You entered the year " << year << endl;
//
//		if (year % 4 == 0)
//		{
//			if (year % 100 == 0)
//			{
//				if (year % 400 == 0)
//				{
//					cout << "The year: " << year << " is  a leap year!" << endl;
//
//				}
//				else
//				{
//					cout << "The year: " << year << " is not a leap year!" << endl;
//				}
//			}
//			else
//			{
//				cout << "The year: " << year << " is a leap year!" << endl;
//			}
//		}
//		else
//		{
//			cout << "The year: " << year << " is not a leap year!" << endl;
//		}
//		cout << endl;
//		cout << "Enter fuer neue Abfrage" << endl;
//
//		cin.ignore(1);
//	}
//	while (cin.get() == '\n');
//
//
//	
//	return 0;
//}