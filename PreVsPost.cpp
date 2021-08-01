#include <iostream>

using namespace std;

void func(int value)
{
	cout << value << endl;
}



int main()
{
	int val = 0;


	// Post: Erst die Codezeile ausfuehren, dann den Wert erhoehen
	// val2 = val +1 (innerhalb der Zeile)
	// val = val2 (Nach beenden der Zeile)
	// 
	// Pre: Erst den Wert erhoehen, dann die Codezeile ausfuehren
	// val = val *1 (innerhalb der Zeile)
	
	//cout << val++ << endl; // 0
	//cout << ++val << endl; // 2


	func(val++);
	cout << val << endl;
	
	//for (int i = 0; i < 3; i++)
	//{
	//	cout << i << endl;
	//}
	
	return 0;
}