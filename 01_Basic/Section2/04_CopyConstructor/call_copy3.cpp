/*

복사 생성자가 호출되는 3가지 경우
3) 함수가 객체를 값으로 반환할 때
=> 리턴용 임시객체가 생성될 때 복사 생성자가 호출된다.
=> 참조로 반환하면 리턴용 임시객체가 생성되지 않는다.
=> 단, 지역변수는 참조로 반환하면 안된다.

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


Point p; // 생성자

// Point foo()  // 값 타입 반환
Point& foo()    // 참조 반환
{
    // Point p;  // 생성자
    return p;
}

int main()
{
    foo();
}
