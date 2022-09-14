#include <iostream>
#include <string>
#include <vector>
#include "getBoard.h"
using namespace std;

string board = "";
//get board and then a vector 
string getBoard(int position, vector<int> mO)
{
	cout << "B";
	for (int i = 0; i < 30; i++)
	{
		
		if (mO[i] != 0 && mO[i] == 1)
		{
			//prints obsticals 
			cout << "O";
		}
		else if (position == i)
		{
			// prints player
			cout << "P";
		}
		else
		{
			cout << " ";
		}
	}
	cout << "E\n";
	for (int i = 0; i < 32; i++)
	{
		cout << "X";
	}
	return board;
}