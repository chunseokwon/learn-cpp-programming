/*

생성자/소멸자 호출 순서
1) 객체가 생성되면
=> "멤버의 생성자가 먼저 호출" 되고
=> "자신의 생성자가 호출" 된다

2) 객체가 파괴되면
=> "자신의 소멸자가 먼저 호출" 되고
=> "멤버의 소멸자가 호출"된다.

*/

#include <iostream>

class Point
{
    int x, y;
public:
    Point()  { std::cout << "Point()"  << std::endl;}
    ~Point() { std::cout << "~Point()" << std::endl;}
};

class Rect
{
    Point p1;
    Point p2;
public:
    Rect()  { std::cout << "Rect()"  << std::endl;}
    ~Rect() { std::cout << "~Rect()" << std::endl;}
};

int main()
{
    Rect r;
}
