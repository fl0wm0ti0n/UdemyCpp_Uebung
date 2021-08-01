//#include <iostream>
//
//using namespace std;
//
//unsigned int sum(unsigned int n)
//{
//	unsigned int nn;
//	if (n > 1)
//	{
//		// Recursive call
//		nn = n + sum(n - 1);
//	}
//	else
//	{
//		nn = 1;
//	}
//	return nn;
//}
//
//unsigned int sum_gauss(unsigned int n)
//{
//	return (n * (n+1)) / (2);
//}
//
//int main()
//{
//	// Compute the sum from 1 to n
//	// S1 = S1
//	// S2  = S1 + S2
//	// S3 = S2 + S3
//	// S4 = S3 + S4
//	// S5 = S4 + S5
//	// S5 = 1 + 2 + 3 + 4 + 5 = 15
//	unsigned int n = 10;
//
//	cout << "Summ from 1 to " << n << " = " << sum(n) << endl;
//
//	cout << "Summ from 1 to " << n << " = " << sum_gauss(n) << endl;
//	
//	cin.get();
//	return 0;
//}