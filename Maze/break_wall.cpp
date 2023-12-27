#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include "break_wall.hpp"
#include "is_visited.hpp"

void break_wall(std::vector<std::vector<int>>* maze)
{

    int x, y, wall;

    while (true)
    {
        x = 1 + rand() % (maze->size() - 2);
        y = 1 + rand() % ((*maze)[0].size() - 2);

        if ((*maze)[x][y] == 0)
        {
            break;
        }
    }

    wall = rand() % 4;
    std::cout << "LOL: " << wall << " Maze: " << x << ";" << y << std::endl;
    std::cout << is_visited(maze, x, y) << std::endl;

    if (wall == 0 && x - 2 >= 0 && !is_visited(maze, x - 2, y))
    {
        (*maze)[x - 1][y] = -2;
    }
    else if (wall == 1 && x + 2 < maze->size() && !is_visited(maze, x + 2, y))
    {
        (*maze)[x + 1][y] = -2;
    }
    else if (wall == 2 && y - 2 >= 0 && !is_visited(maze, x, y - 2))
    {
        (*maze)[x][y - 1] = -2;
    }
    else if (wall == 3 && y + 2 < (*maze)[0].size() && !is_visited(maze, x, y + 2))
    {
        (*maze)[x][y + 1] = -2;
    }
}