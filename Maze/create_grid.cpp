#include <vector>
#include "create_grid.hpp"

void create_grid(std::vector<std::vector<int>>* maze)
{
    for (int x = 0; x < maze->size(); x++)
    {
        if (x % 2 == 0)
        {
            for (int y = 0; y < (*maze)[0].size(); y++)
            {
                (*maze)[x][y] = -1;
            }
        }
        else
        {
            for (int y = 0; y < (*maze)[0].size(); y++)
            {
                if (y % 2 == 0)
                {
                    (*maze)[x][y] = -1;
                }
                else
                {
                    (*maze)[x][y] = 0;
                }
            }
        }
    }

    int entry = 1 + rand() % (((*maze)[0].size() - 1) / 2) * 2;
    int output = 1 + rand() % (((*maze)[0].size() - 1) / 2) * 2;

    (*maze)[0][entry] = 0;
    (*maze)[maze->size() - 1][output] = 0;
}