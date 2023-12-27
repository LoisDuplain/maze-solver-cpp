#include <vector>
#include <cstdlib>
#include <ctime>
#include "random_break.hpp"

void random_break(std::vector<std::vector<int>>* maze)
{
	srand(time(nullptr));
	int nbWalls = 35 + rand() % (60 + 1 - 35);
	int x, y;

	for (int i = 0; i < nbWalls; i++)
	{
		do
		{
			x = 1 + rand() % (maze->size() - 2);
			y = 1 + rand() % ((*maze)[0].size() - 2);
		} while ((*maze)[x][y] != -1);
		
		(*maze)[x][y] = 0;
	}
}