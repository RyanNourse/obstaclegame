#include <iostream>
#include <string>
#include <vector>
#include "moveObstacles.h"
using namespace std;
int newValue;
int counter;
void moveObstacle(vector<int> mO)
{
	if (counter % 3 == 0)
	{
		mO[30] = 1;
	}
	for (int i = 1;i < 30;i++)
	{

	}
	counter++;
}