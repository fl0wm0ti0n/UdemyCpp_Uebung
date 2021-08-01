#pragma once

void print_game_state(unsigned int player_pos, unsigned int start, unsigned int goal);
int execute_move(unsigned int player_pos, char move);
bool is_finished(unsigned int player_pos, unsigned int goal);
void game();