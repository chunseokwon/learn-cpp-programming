#include <iostream>

struct Point
{
    int x{10};
    int y{20};
};

int main()
{
    Point pt;
    
    // int x = pt.x;
    // int y = pt.y;
    
    // auto [x, y] = pt; // structured binding
    
    // int arr[2] = {1,2};
    // auto [x,y] = arr; // structured binding

    // int [x, y] = pt; // error
    
    const auto [x, y] = pt; // ok
    // const auto [x, y] = pt; // ok
    
    // int x = 10; // error
    
    // structured binding
    // 구조체 또는 배열에서 각 "멤버의 값을 꺼낼 때" 사용
    // 타입은 반드시 "auto"를 사용해야 한다.
    
    std::cout << x << ", " << y << std::endl;
}
