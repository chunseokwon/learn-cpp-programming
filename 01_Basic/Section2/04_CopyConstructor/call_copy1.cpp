/*

복사 생성자가 호출되는 3가지 경우
1) 자신과 동일한 타입의 객체로 초기화 될 때
=> Point p2(p1);
=> Point p2{p1};
=> Point p2 = p1; => explicit가 아닌 경우만

*/

#include <iostream>

class Point
{
public:
    int x;
    int y;
    
    Point(int a, int b) : x(a), y(b) 
    {
        std::cout << "ctor" << std::endl;
    }
    explicit Point( const Point& p) : x(p.x), y(p.y)
    {
        std::cout << "copy ctor" << std::endl;
    }
};

int main()
{
    Point p1(1,2);   // 생성자
    Point p2(p1);    // 복사 생성자
    Point p3{p1};    // 직접 초기화
    Point p4 = {p1}; // 복사 초기화
    Point p5 = p1;   // 복사 초기화
}
