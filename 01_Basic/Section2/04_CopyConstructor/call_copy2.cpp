/*

복사 생성자가 호출되는 3가지 경우
2) 함수 인자를 call by value로 받을 경우
=> 함수 인자를 const reference로 사용 하면 복사본을 만들지 않으므로 복사 생성자가 호출되지 않는다.

*/ 

#include <iostream>

class Point
{
public:
    int x;
    int y;

    Point(int a = 0, int b = 0) : x(a), y(b) 
    {
        std::cout << "ctor" << std::endl;
    }
    Point( const Point& p)      : x(p.y), y(p.x)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

// void foo( Point pt) // Point pt = p1
void foo( const Point& pt) // const Point& pt = p1
{
}

int main()
{
    Point p1(1,2);
    foo(p1);
}
