//#include <iostream>
//
//using namespace std;
//
//int modulo(int n1, int n2)
//{
//	// 10 % 3 = 1
//	// 10 / 3 = 3,3333 = int 3
//	// rest = 10 - 3*3 = 1
//	// 
//	// 10 % 2 = 0
//	// 10 / 2 = 5
//	// rest = 10 - 2*5 = 0
//	//
//	// 100 / 6 = 16,6666 = int 16
//	// rest = 100 - 6*16 = 4
//
//	int step1 = n1 / n2;
//	int step2 = n1 - (n2 * step1);
//
//	if(step2 > 0)
//	{
//		step2 = 1;
//	}
//	
//	return step2;
//}
//
//int main()
//{
//
//	int a = 100;
//	int b = 6;
//	int m;
//
//
//	m = modulo(a, b);
//
//	cout << m << endl;
//
//	cin.get();
//	return 0;
//}