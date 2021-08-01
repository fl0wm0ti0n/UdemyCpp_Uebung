#include <iostream>

using namespace std;

void f0(int* number)
{
	*number += 1;
	cout << *number << endl;
}

// Call by Value
// [Legt Kopie der Variable an]
// Gro�er Nachteil: Nach verlassen der Funktion geht der Wert der �bergebenen Variablen verloren.
// Nachteil: Speicherverschwendung (vorallem ab gr��eren Objekten).
// Sinnvoll: Wenn ich Etwas mit dem Wert des OBjektes machen will ohne das Objekt zu ver�ndert.
void f1(int number)
{
	number++;
}


// Call by Reference
// [Arbeitet mit Referenz auf Speicherbereich]
// Gro�er Vorteil 1: Nach verlassen der Funktion geht der Wert der �bergebenen Variablen NICHT verloren.
// Gro�er Vorteil 2: Es k�nnnen grenzenlos viele Variablen ver�ndert werden.
// Vorteil: Speichersparen (vorallem ab gr��eren Objekten).
// Sinnvoll: Wenn ich das Objekt ver�ndern und in der Huptroutine weiterarbeiten will.
void f2(int &number)
{
	number++;
}

// Call by Value & return
// [Legt Kopie der Variable an]
// Gro�er Nachteil: Es soll immer nur ein Wert retourniert werden ("nach good Practise"), also damit ver�ndert werden.
// Nachteil: Speicherverschwendung (vorallem ab gr��eren Objekten) und mehr schreibaufwand.
int f3(int number)
{
	return number + 1;
}

// Call by Reference
// [Arbeitet mit Referenz auf Speicherbereich]
// Gro�er Vorteil 1: Nach verlassen der Funktion geht der Wert der �bergebenen Variablen NICHT verloren.
// Gro�er Vorteil 2: Es k�nnnen grenzenlos viele Variablen ver�ndert werden.
// Vorteil: Speichersparen (vorallem ab gr��eren Objekten).
// Sinnvoll: Wenn ich das Objekt ver�ndern und in der Huptroutine weiterarbeiten will.
void f4(int* &pnumber)
{
	cout << "in function f4: " << *pnumber << endl;
	cout << "in function f4: " << pnumber << endl;
	cout << "in function f4: " << &pnumber << endl;
	//*pnumber = 10; // geht
	//*pnumber++; // geht nicht
	*pnumber += 1; // geht
	//*pnumber = *pnumber + 1; // geht
	cout << "in function f4: " << *pnumber << endl;
	cout << "in function f4: " << pnumber << endl;
	cout << "in function f4: " << &pnumber << endl;
}

void f5(int* pnumber)
{
	cout << "in function f5: " << *pnumber << endl;
	cout << "in function f5: " << pnumber << endl;
	cout << "in function f5: " << &pnumber << endl;
	//*pnumber = 10; // geht
	//pnumber++; // geht nicht
	//*pnumber++; // geht nicht
	*pnumber += 1; // geht
	//*pnumber = *pnumber + 1; // geht
	cout << "in function f5: " << *pnumber << endl;
	cout << "in function f5: " << pnumber << endl;
	cout << "in function f5: " << &pnumber << endl;
}


int main()
{
	// with stack
	int num = 5;
	cout << num << endl; // 5

	f1(num);
	cout << num << endl; // immer noch 5
	
	f2(num);
	cout << num << endl; // 6

	num = f3(num);
	cout << num << endl; // 7

	f0(&num);
	cout << num << endl; // 8

	// with heap
	int* pointer = new int{5}; // int
	//int* parray = new int[5] {1,2,3,4,5}; // array with int
	cout << "out function f4: " << *pointer << endl; // 5
	cout << "out function f4: " << pointer << endl; // 5
	cout << "out function f4: " << &pointer << endl; // 5
	f4(pointer);
	cout << "out function f4: " << *pointer << endl; // 6
	cout << "out function f4: " << pointer << endl; // 6
	cout << "out function f4: " << &pointer << endl; // 6

	cout << "out function f5: " << *pointer << endl; // 5
	cout << "out function f5: " << pointer << endl; // 5
	cout << "out function f5: " << &pointer << endl; // 5
	f5(pointer);
	cout << "out function f5: " << *pointer << endl; // 6
	cout << "out function f5: " << pointer << endl; // 6
	cout << "out function f5: " << &pointer << endl; // 6
	
	delete pointer;
	//delete[] parray;
	
	return 0;
}