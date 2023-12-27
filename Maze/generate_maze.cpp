#include <vector>
#include <cstdlib>
#include <ctime>
#include "generate_maze.hpp"
#include "create_grid.hpp"
#include "break_wall.hpp"
#include "is_visited.hpp"
#include "all_visited.hpp"
#include "random_break.hpp"

std::vector<std::vector<int>> generate_maze()
{
    srand(time(nullptr));
    int wall, line;

    do
    {
        wall = 61 + rand() % (71 + 1 - 61);
        line = 41 + rand() % (51 + 1 - 41);
    } while (wall % 2 == 0 || line % 2 == 0);

    std::vector<std::vector<int>> maze(wall, std::vector<int>(line, 0));

    /*create_grid(&maze);

    do
    {
        break_wall(&maze);
    } while (!all_visited(&maze));

    random_break(&maze);*/

    return maze;
}