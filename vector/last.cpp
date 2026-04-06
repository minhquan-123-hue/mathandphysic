#include <iostream> // thư viện cung cấp hàm : đọc input , in ouput trong terminal
#include <cmath>    // thư viện toán học cung cấp hàm sqrt()

int main()
{

    struct Player
    {
        float x;
        float y;
    };

    Player player;
    player.x = 0;
    player.y = 0;

    struct Enemy
    {
        float x;
        float y;
    };

    Enemy enemy;
    enemy.x = 3;
    enemy.y = 4;

    float deltaX = enemy.x - player.x; // 3
    float deltaY = enemy.y - player.y; // 4

    // độ dài của vector ban đầu là 5
    while ((deltaX * deltaX + deltaY * deltaY) > 1.0f)
    {
        deltaX = enemy.x - player.x;
        deltaY = enemy.y - player.y;

        std::cout << "độ lệch giảm sau mỗi frame: " << "(" << deltaX << "," << deltaY << ")" << std::endl;

        float length = sqrt(deltaX * deltaX + deltaY * deltaY);

        std::cout << "độ dài của vector mới: " << length << std::endl;

        float nX = deltaX / length;
        float nY = deltaY / length;

        std::cout << "nX: " << nX << " nY: " << nY << std::endl;

        player.x += nX;
        player.y += nY;

        std::cout << "player di chuyen den khi va cham enemey: " << "(" << player.x << "," << player.y << ")" << std::endl;
    }
}