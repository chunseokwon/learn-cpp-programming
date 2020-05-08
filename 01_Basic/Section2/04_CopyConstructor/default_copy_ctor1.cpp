/*

디폴트 복사 생성자의 문제점
1) 객체가 자신의 동일한 타입의 객체로 초기화 될 때
=> "복사 생성자가 사용"된다.
=> 사용자가 만들지 않은 경우 "디폴트 복사 생성자가 사용"된다.
=> 디폴트 복사 생성자는 "모든 멤버를 복사" 해 준다.

2) 디폴트 복사 생성자가 모든 멤버를 복사 해주는 것은
=> 편리한 경우도 있지만
=> "문제가 되는 경우도 있다."

*/

#include <iostream>

class Point
{
public:
    int x;
    int y;
    
    Point(int a, int b) : x(a), y(b) { }    
};

int main()
{
    Point p1(1,2); // ok
    Point p2(p1);
    
    std::cout << p2.x << std::endl; // 1
    std::cout << p2.y << std::endl; // 2
}
