#include <iostream>
#include <stdlib.h>
#include "Game.h"

#define LEN_X 10
#define LEFT 'a'
#define RIGHT 'd'

using namespace std;


void print_game_state(unsigned int player_pos, unsigned int start, unsigned int goal)
{
	char game_state[LEN_X];


	for (int i = 0; i < LEN_X; i++)
	{
		game_state[i] = '.';
	}

	game_state[start] = '|';
	game_state[player_pos] = 'P';
	game_state[goal-1] = '|';

	for (int i = 0; i < LEN_X; i++)
	{
		cout << game_state[i];
	}

}

int execute_move(unsigned int player_pos, char move)
{
	// fuehre den eingegebenen move aus
	if (move == LEFT)
	{
		if (player_pos != 0)
		{
			player_pos--;
			cout << "you moved left!" << endl;
		}
		else
		{
			cout << "you bounced!" << endl;
		}
	}
	else if (move == RIGHT)
	{
		if (player_pos != LEN_X)
		{
			player_pos++;
			cout << "you moved right!" << endl;
		}
		else
		{
			cout << "you bounced!" << endl;
		}
	}
	else
	{
		cout << "Unrecognized move!" << endl;
	}
	return player_pos;
}

bool is_finished(unsigned int player_pos, unsigned int goal)
{
	// pruefe ob gewonnen
	if (player_pos == goal)
	{
		cout << "you won the game!" << endl;
		return true;
	}
	else
	{
		return false;
	}
}

void game()
{

	// LEN_X = 10
	// Wir haben 10 Spielfelder insgesamt
	// Pos 0: Start, Pos 9: Ziel

	unsigned int player_pos = 0;
	unsigned int start = 0;
	unsigned int goal = LEN_X;

	char move;
	bool finished = false;

	while (!finished)
	{
		print_game_state(player_pos, start, goal);
		cin >> move;
		system("CLS");
		player_pos = execute_move(player_pos, move);
		finished = is_finished(player_pos, goal);		
	}
}
