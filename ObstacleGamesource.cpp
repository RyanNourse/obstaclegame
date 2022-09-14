#include <iostream>
#include <string>
#include <vector>
#include "getBoard.h"
#include "movePlayer.h"
#include "moveObstacles.h"
using namespace std;

int main()
{
	//variables 
	char pMoves;
	int player = 0;
	int newPlayer;
	int saveValue;
	vector<int> obstacle;
	obstacle.resize(29);
	obstacle.push_back(1);
	vector<int> newVec;
	newVec.resize(29);
	//inital board
	cout << getBoard(0,obstacle) << "\n";
	bool win = false;
	bool collision = false;
	int count = 1;
	//loop to play the game until collision or win
	do {
		if(count%3 == 0)
		{
			obstacle.push_back(1);
		}
		//reading in the char to make a move
		cin >> pMoves;
		while (pMoves != 'a' && pMoves != 'd' && pMoves != 'f')
		{
			cout << "That is not a valid character to move, try again \n";
			cin >> pMoves;
		}
		
		newPlayer = movePlayer(pMoves);
		for (int i = 1;i < obstacle.size();i++)
		{
			if (obstacle[i] != 0)
			{
				obstacle[i - 1] = obstacle[i];
				obstacle[i] = 0;
			}

		}
		//printing the new board
		cout << getBoard(newPlayer,obstacle) << "\n";
		//moveObstacle(obstacle);
		//checking for a win or a collision 
		if (newPlayer == 30)
		{
			win = true;
		}
		for (int k = 0; k < 30; k++)
		{
			if (newPlayer == k && obstacle[k]==1)
			{
				
				collision = true;
			}
		}
		count++;
	} while (!win && !collision);
	if (win == true)
	{
		cout << "YOU WIN";
	}
	if (collision == true)
	{
		cout << "YOU LOSE";
	}
}
