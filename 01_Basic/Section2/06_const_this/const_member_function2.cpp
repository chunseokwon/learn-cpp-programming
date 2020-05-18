/*

1) 핵심
=> "상ㅇ수 객체는 상수 멤버 함수만 호출할 수 있다."

2) const Point pt(1, 1)
=> 상수 객체이므로 객체의 상태를 변경할 수 없어야 한다.
=> 하지만 "상태를 얻거거나 출력 할 수는 있어야" 한다.
=> print 멤버 함수는 "반드시" 상수 멤버 함수로 해야 한다.

*/

#include <iostream>

class Point
{
public:
    int x, y;
    Point(int a = 0, int b = 0) : x(a), y(b) {}
    
    void set( int a, int b ) { x = a; y = b; }
    
    void print() const 
    {
        std::cout << x << ",  " << y << std::endl;
    }
};


int main()
{
    const Point pt(1,1);  // 상수 객체
    pt.x = 10;      // error
    pt.set(10,10);  // error
    pt.print();     // error
                    // 단, print()가 상수 함수라면
                    // ok..
}
