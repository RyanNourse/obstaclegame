#include <iostream>
#include <string>
#include "movePlayer.h"
using namespace std;
int posChange = 0;
int movePlayer(char move)
{
	if (move == 'a') 
	{
		posChange--;
	}
	else if (move == 'd')
	{
		posChange++;
	}
	else if (move == 'f')
	{
		posChange++;
		posChange++;
	}
	else
	{
		//makes sure if input is wrong there is no move
		cout << "That is not a valid character to move, try again \n";
	}
	if (posChange < 0)
	{
		posChange = 0;
	}
	if (posChange > 30)
	{
		posChange = 30;
	}
	return posChange;
}