#include <iostream>
#include <stdlib.h>
#include "Game.h"

using namespace std;

int main()
{
	bool repeat = true;

	while (true)
	{
		game();
		
		cout << "play again? (0=N, 1=Y)" << endl;
		cin >> repeat;
		if (repeat == 0)
		{
			break;	
		}
	}
	
	getchar();
	getchar();
	return 0;
}