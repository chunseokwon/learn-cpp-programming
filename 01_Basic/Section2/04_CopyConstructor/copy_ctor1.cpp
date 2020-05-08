/*

복사 생성자
1) 복사 상성자란?
=> 자신과 동일한 타입 한 개를 인자로 가지는 생성자

2) 사용자가 복사 생성자를 만들지 않으면
=> 컴파일러가 제공
=> 디폴트 복사 생성자(default copy constructor)
=> 모든 멤버를 복사(bitwise copy) 한다

*/

#include <iostream>

class Point
{
public:
    int x;
    int y;

    Point()             : x(0), y(0) {}
    Point(int a, int b) : x(a), y(b) {}

    // 사용자가 만드는 복사 생성자
    Point( const Point& p) : x(p.y), y(p.x)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

int main()
{
    Point p1;       // ok
    Point p2(1,2);  // ok
    // Point p3(1); // Point( int ) - error
    Point p4(p2);   // Point( Point ) - ok. 
    
    std::cout << p4.x << std::endl; // 2
    std::cout << p4.y << std::endl; // 1
    
}


/*
Point(const Point& p) : x(p.x), y(p.y)
{
}
*/