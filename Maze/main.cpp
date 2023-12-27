#include <iostream>
#include <vector>
#include "generate_maze.hpp"
#include "print_maze.hpp"

void main()
{
	std::vector<std::vector<int>> maze = generate_maze();
	print_maze(&maze);
}