#include <vector>
#include "is_visited.hpp"

bool is_visited(std::vector<std::vector<int>>* maze, int x, int y)
{
	bool isVisited = false;

	if ((*maze)[x][y] == -2)
	{
		isVisited = true;
	}

	return isVisited;
}