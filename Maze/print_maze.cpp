#include <SFML/Graphics.hpp>
#include "print_maze.hpp"
#include "generate_maze.hpp"

void print_maze(std::vector<std::vector<int>>* maze)
{
    sf::RenderWindow window(sf::VideoMode(1280, 720), "Maze Generator");

    int blockSize = 13.5;
    int mazeWidth = maze->size() * blockSize;
    int mazeHeight = (*maze)[0].size() * blockSize;
    int startX = (window.getSize().x - mazeWidth) / 2;
    int startY = (window.getSize().y - mazeHeight) / 2;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        window.clear(sf::Color::White);

        for (size_t y = 0; y < (*maze)[0].size(); ++y)
        {
            for (size_t x = 0; x < maze->size(); ++x)
            {
                sf::RectangleShape block(sf::Vector2f(blockSize, blockSize));
                if ((*maze)[x][y] == -1)
                {
                    block.setFillColor(sf::Color::Black);
                }
                else if ((*maze)[x][y] == 0)
                {
                    block.setFillColor(sf::Color::White);
                }
                else if ((*maze)[x][y] == -2)
                {
                    block.setFillColor(sf::Color::White);
                }

                block.setPosition(startX + x * blockSize, startY + y * blockSize);
                window.draw(block);
            }
        }

        window.display();
    }
}