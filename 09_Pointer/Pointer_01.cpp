//#include <iostream>
//
//using namespace std;
//
//// Lokale Kopie (Call by Value)
//// Funktionsaufruf legt neue Pointervariable an mit adresse zu Heap wo der Wert liegt:
//void f(int* p_function)
//{
//    cout << "Called Function F" << endl;
//
//    cout << "In Function f: Memory adress of  the Variable 'p_function': " << &p_function << endl;
//    cout << "In Function f: Memory adress of heap-variable, where the variable 'p_function' points to: " << p_function << endl;
//    cout << "In Function f: Value of the heap-variable, where the variable 'p_function' points to: " << *p_function << endl;
//}
//
//// Lokale Kopie (Call by Value)
//// Funktionsaufruf legt neue Variable an mit kopiertem Wert:
//void g(int n_function)
//{
//    cout << "Called Function G" << endl;
//
//    cout << "In Function g: Memory adress of the Variable 'n_function': " << &n_function << endl;
//    cout << "In Function g: The Variable 'n_function' Value: " << n_function << endl;
//}
//
//
//// Neuer Pointer (Call by Reference)
//// Funktionsaufruf legt neue Pointervariable an mit adresse zu Heap wo der Wert liegt:
//void f2(int* &p_function)
//{
//    cout << "Called Function F2" << endl;
//
//    cout << "In Function f2: Memory adress of  the Variable 'p_function': " << &p_function << endl;
//    cout << "In Function f2: Memory adress of heap-variable, where the variable 'p_function' points to: " << p_function << endl;
//    cout << "In Function f2: Value of the heap-variable, where the variable 'p_function' points to: " << *p_function << endl;
//}
//
//// Neuer Pointer (Call by Reference)
//// Funktionsaufruf arbeitet mit selber Variable weiter
//void g2(int &n_function)
//{
//    cout << "Called Function G2" << endl;
//
//    cout << "In Function g2: Memory adress of the Variable 'n_function': " << &n_function << endl;
//    cout << "In Function g2: The Variable 'n_function' Value: " << n_function << endl;
//}
//
//int main()
//{
//    //-------------------------------------------------------------------//
//    // Stack:
//    //-------------------------------------------------------------------//
//
//    //int number = 1337;
//    //cout << "Value of Number: " << number << endl;
//    //cout << "Memory adress of Number: " << &number << endl;
//
//    //// Pointer muss auf eine Speicheradresse zeigen
//    //// p: Memory adress
//    //// *p: Value of that memory adress
//    //int* pointer_to_any_adress;
//
//    //int* p = &number;
//    //cout << "Memory adress of pointer where it points to: " << p << endl;
//    //cout << "Value where the variable 'p' points to: " << *p << endl;
//
//    //cout << endl;
//    //cout << endl;
//
//    //-------------------------------------------------------------------//
//    // Heap:
//    //-------------------------------------------------------------------//
//
//    //int* p_zahl = new int{ 4 };
//
//
//    //cout << "Memory adress of pointer itself (stack): " << &p_zahl << endl;
//    //cout << "Memory adress of heap-variable, where the variable 'p_zahl' points to: " << p_zahl << endl;
//    //cout << "Value of the heap-variable, where the variable 'p_zahl' points to: " << *p_zahl << endl;
//
//    //// speicher am heap freigeben (de-allocation)
//    //cout << "Delete" << endl;
//    //delete p_zahl;
//    //p_zahl = nullptr;
//
//    //// Pointer existiert weiter
//    //cout << "Memory adress of pointer itself (stack): " << &p_zahl << endl;
//    //cout << "Memory adress of heap-variable, where the variable 'p_zahl' points to: " << p_zahl << endl;
//    //// nicht erlaubt da speicher nicht mehr zugewiesen
//    ////cout << "Value of the heap-variable, where the variable 'p_zahl' points to: " << *p_zahl << endl;
//
//    ////Umgehung
//    //if (p_zahl != nullptr)
//    //{
//    //    cout << "Memory adress of pointer itself (stack): " << &p_zahl << endl;
//    //    cout << "Memory adress of heap-variable, where the variable 'p_zahl' points to: " << p_zahl << endl;
//    //    cout << "Value of the heap-variable, where the variable 'p_zahl' points to: " << *p_zahl << endl;
//    //}
//
//    //// Pointer kann neuer Heap zugewiesen werden weiter
//    //p_zahl = new int{ 8 };
//    //
//    ////Umgehung
//    //if (p_zahl != nullptr)
//    //{
//    //    cout << "p_zahl ist nicht NULLPOINTER";
//
//    //    cout << "Memory adress of pointer itself (stack): " << &p_zahl << endl;
//    //    cout << "Memory adress of heap-variable, where the variable 'p_zahl' points to: " << p_zahl << endl;
//    //    cout << "Value of the heap-variable, where the variable 'p_zahl' points to: " << *p_zahl << endl;
//    //}
//
//    //-------------------------------------------------------------------//
//    // Functions without referenz
//    //-------------------------------------------------------------------//
//    cout << "Functions without referenz" << endl;
//    cout << endl;
//
//    int* p_number = new int{ 4 };
//
//    cout << "Out Function: Memory adress of the Variable 'p_number': " << &p_number << endl;
//    cout << "Out Function: Memory adress of heap-variable, where the variable 'p_number' points to: " << p_number << endl;
//    cout << "Out Function: Value of the heap-variable, where the variable 'p_number' points to: " << *p_number << endl;
//    f(p_number);
//
//    cout << endl;
//
//    int normal_number = 7;
//    cout << "Out Function: Memory adress of the Variable 'normal_number': " << &normal_number << endl;
//    cout << "Out Function: The Variable 'normal_number' Value: " << normal_number << endl;
//    g(normal_number);
//
//
//    cout << endl;    
//    cout << endl;
//
//    //-------------------------------------------------------------------//
//    // Functions with referenz
//    //-------------------------------------------------------------------//
//    cout << "Functions with referenz" << endl;
//    cout << endl;
//    cout << "Out Function: Memory adress of the Variable 'p_number': " << &p_number << endl;
//    cout << "Out Function: Memory adress of heap-variable, where the variable 'p_number' points to: " << p_number << endl;
//    cout << "Out Function: Value of the heap-variable, where the variable 'p_number' points to: " << *p_number << endl;
//    f2(p_number);
//
//    cout << endl;
//
//    cout << "Out Function: Memory adress of the Variable 'normal_number': " << &normal_number << endl;
//    cout << "Out Function: The Variable 'normal_number' Value: " << normal_number << endl;
//    g2(normal_number);
//
//
//    delete p_number;
//    p_number = nullptr;
//
//}
