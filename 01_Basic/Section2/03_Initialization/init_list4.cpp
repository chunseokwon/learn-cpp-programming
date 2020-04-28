/*

주의 사항
1) 초기화 순서
=> 초기화 리스트의 순서대로 초기화 되지 않고,
=> "멤버 데이터가 놓인 순서대로 초기화" 된다.

*/

#include <iostream>

class Point
{
public:
    int x;
    int y;

public:
    // Point() : y(0), x(0)
    Point() : x(0), y(0)
    {
    }
};

int main()
{
    Point p;
    
    std::cout << p.x << std::endl; // 0
}
