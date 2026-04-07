#include <iostream>
#include <cmath>

struct Enemy
{
    float x;
    float y;
    float speed;
};

struct Character
{
    float x;
    float y;
};

int main()
{
    Enemy enemy;
    std::cout << "enemy.x: ";
    std::cin >> enemy.x;
    std::cout << "enemy.y: ";
    std::cin >> enemy.y;

    Character character;
    std::cout << "character.x: ";
    std::cin >> character.x;
    std::cout << "character.y: ";
    std::cin >> character.y;

    float deltaX;
    float deltaY;

    while (true)
    {
        // bước đi của "kẻ địch" đến "nhân vật" là:
        deltaX = character.x - enemy.x;
        deltaY = character.y - enemy.y;

        if (deltaX * deltaX + deltaY * deltaY <= 0.0f)
        {
            std::cout << "bạn đã va chạm với người chơi" << std::endl;
            break;
        }
        // độ dài của quãng đường
        float length = sqrt(deltaX * deltaX + deltaY * deltaY);

        float nX = deltaX / length;
        float nY = deltaY / length;

        enemy.x += nX;
        enemy.y += nY;

        std::cout << "vị trí của enemy sau mỗi frame: " << "(" << enemy.x << "," << enemy.y << ")" << std::endl;

        // ép va chạm khi mà bị đi lố
        if (enemy.x >= character.x)
        {
            enemy.x = character.x;
        }
        if (enemy.y >= character.y)
        {
            enemy.y = character.y;
        }
    }
}