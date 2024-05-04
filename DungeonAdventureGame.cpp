#include <iostream>
#include <raylib.h>
#include <conio.h>
#include "Player.h"
#include "Inventory.h"
#include "Unit.h"
#include "Weapon.h"



class Game
{
private:
    std::string inventoryText;

public:
    void run()
    {
        Player player(100);
        player.addToInventory("Short Sword");
        player.addToInventory("Dagger");

        const int screenWidth = 1920;
        const int screenHeight = 1080;

        InitWindow(screenWidth, screenHeight, "Game");

        while (!WindowShouldClose())
        {
            handleInput(player);

            BeginDrawing();
            ClearBackground(BLACK);

            drawMenu(screenWidth, screenHeight, player);

            EndDrawing();
        }

        CloseWindow();
    }

    void handleInput(Player& player)
    {
        if (IsKeyPressed(KEY_ONE))
        {
            // Add code
        }
    }

    void drawMenu(int screenWidth, int screenHeight, const Player& player)
    {
        //  Menu constants
        const int menuWidth = 300;
        const int menuHeight = 120;
        const int menuX = (screenWidth - menuWidth) / 2;
        const int menuY = screenHeight - menuHeight - 50;

        //  Inventory Screen
        const int inventoryWidth = 800;
        const int inventoryHeight = 500;
        const int inventoryX = (screenWidth - inventoryWidth) / 2;
        const int inventoryY = screenHeight - inventoryHeight - 50;

        //  Seperation Line
        DrawLine(0, menuY - 10, screenWidth, menuY - 10, RAYWHITE);

        //  Menu Screen
        DrawText("===== Menu =====", menuX, menuY, 24, RAYWHITE);
        DrawText("1. Print inventory", menuX, menuY + 30, 24, RAYWHITE);
        DrawText("2. Other menu option", menuX, menuY + 60, 24, RAYWHITE);
        DrawText("Q. Quit", menuX, menuY + 90, 24, RAYWHITE);

        //  Inventory
        const Inventory& inventory = player.getPlayerInventory();
        const std::vector<std::string>& items = inventory.getItems();

        inventoryText = "Inventory items:\n";
        for (const std::string& item : items)
        {
            inventoryText += "- " + item + "\n";
        }
        DrawText(inventoryText.c_str(), inventoryX, inventoryY + 150, 24, RAYWHITE);

        
    }
};

int main()
{
    Game ui;
    ui.run();

    return 0;
}