#include <iostream>
#include <raylib.h>
#include "Player.h"
#include "Inventory.h"
#include "Unit.h"
#include "Weapon.h"


class UserInterface
{
public:
    void run()
    {
        Player player(100);
        Weapon shortsword("Short Sword", "An iron short sword", 10);

        player.setEquippedItem(shortsword);

        const int screenWidth = 800;
        const int screenHeight = 600;

        InitWindow(screenWidth, screenHeight, "Game");

        while (!WindowShouldClose())
        {
            handleInput(player);

            BeginDrawing();
            ClearBackground(BLACK);

            drawMenu(screenWidth, screenHeight);

            EndDrawing();
        }

        CloseWindow();
    }

    void handleInput(Player& player)
    {
        if (IsKeyPressed('1'))
        {
            player.printInventory();
        }
        else if (IsKeyPressed('2'))
        {
            // Handle other menu options
        }
        else if (IsKeyPressed('q'))
        {
            std::cout << "Exiting the program." << std::endl;
        }
    }

    void drawMenu(int screenWidth, int screenHeight)
    {
        const int menuWidth = 300;
        const int menuHeight = 120;

        const int menuX = (screenWidth - menuWidth) / 2;
        const int menuY = screenHeight - menuHeight - 50;

        // Draw top line
        DrawLine(0, menuY - 10, screenWidth, menuY - 10, RAYWHITE);

        DrawText("===== Menu =====", menuX, menuY, 24, RAYWHITE);
        DrawText("1. Print inventory", menuX, menuY + 30, 24, RAYWHITE);
        DrawText("2. Other menu option", menuX, menuY + 60, 24, RAYWHITE);
        DrawText("Q. Quit", menuX, menuY + 90, 24, RAYWHITE);
    }
};

int main()
{
    UserInterface ui;
    ui.run();

    return 0;
}