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

        Weapon shortsword("Short Sword", "An iron short sword", 10);

        

        player.addToInventory(shortsword);

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
        // Menu constants
        const int menuWidth = 300;
        const int menuHeight = 120;
        const int menuX = (screenWidth - menuWidth) / 2;
        const int menuY = screenHeight - menuHeight - 50;

        // Inventory constants
        const int inventoryWidth = 800;
        const int inventoryHeight = 500;
        const int inventoryX = screenWidth - inventoryWidth; 
        const int inventoryY = menuY;

        // Seperation Line
        DrawLine(0, menuY - 10, screenWidth, menuY - 10, RAYWHITE);

        // Menu Screen
        DrawText("===== Menu =====", menuX, menuY, 24, RAYWHITE);
        DrawText("1. Equip Weapon", menuX, menuY + 30, 24, RAYWHITE);
        DrawText("2. Placeholder", menuX, menuY + 60, 24, RAYWHITE);
        DrawText("Q. Quit", menuX, menuY + 90, 24, RAYWHITE);

        // Inventory Screen
        const Inventory& inventory = player.getPlayerInventory();
        const std::vector<std::string>& items = inventory.getItems();

        inventoryText = "Inventory items:\n\n";
        for (size_t i = 0; i < items.size(); ++i)
        {
            inventoryText += std::to_string(i + 1) + ". " + items[i] + "\n\n";
        }
        DrawText(inventoryText.c_str(), inventoryX, inventoryY, 24, RAYWHITE);

        //  Equipped item text

    }
};

int main()
{
    Game ui;
    ui.run();

    return 0;
}