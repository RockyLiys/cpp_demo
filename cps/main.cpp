#include <iostream>
using namespace std;

void for_print()
{
    int v[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (auto x : v)
    {
        cout << x << '\n';
    }

    for (auto x : {10, 11, 12})
    {
        cout << x << '\n';
    }
}
int count_x(char *p, char x)
{
    if (p == nullptr)
        return 0;
    int count = 0;
    // 用for循环
    // for (; p!=nullptr; ++p){
    //     if (*p==x){
    //         ++count;
    //     }
    // }
    // 用while循环
    while (p)
    {
        if (*p == x)
        {
            ++count;
        }
        ++p;
    }
    return count;
}

struct Point
{
    /* data */
    int x, y;
    int scale;
};

void move_x(int x) {}
void update_display() {}

void action()
{
    while (true)
    {
        cout << "enter action: \n";
        string act;
        cin >> act;
        Point delta{0, 0};
        for (char ch : act)
        {
            switch (ch)
            {
            case 'u':
            case 'n':
                ++delta.y;
                break;
            default:
                cout << "I freeze!\n";
            }
            int current{1};
            int scale{0};
            move(current + delta.scale);
            update_display();
        }
    }
}

enum class Color
{
    red,
    green,
    blue
};
enum class Color_Light
{
    green,
    yellow,
    red
};

void enum_demo()
{
    Color v = Color::red;
    Color_Light s = Color_Light::green;
}
Color_Light light = Color_Light::green;
Color_Light &operator++(Color_Light &t)
{
    switch (t)
    {
    case Color_Light::green:
        t = Color_Light::green;
    case Color_Light::yellow:
        t = Color_Light::yellow;
    case Color_Light::red:
        t = Color_Light::red;
    }
    return t;
}

int main()
{
    cout << "Hello world!\n";
    for_print();
    cout << "====================" << endl;  // TODO 不明白
    std::cout << static_cast<int>(light) << std::endl;
    Color_Light next = ++light;
    std::cout << static_cast<int>(next) << std::endl;
    return 0;
}
