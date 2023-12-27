#include <vector>
#include "all_visited.hpp"

bool all_visited(std::vector<std::vector<int>>* maze)
{
	bool allVisited = true;
	int x = 0;
	int y;

	while (x < maze->size())
	{
		y = 0;

		while (y < (*maze)[0].size())
		{
			if ((*maze)[x][y] != -1)
			{
				if ((*maze)[x][y] != -2)
				{
					allVisited = false;
				}
			}

			y++;
		}

		x++;
	}

	return allVisited;
}