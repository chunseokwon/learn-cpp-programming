/*

1) "mutable" 멤버 데이터
=> 상수 멤버 함수 안에서도 값을 변경할 수 있다.

2) "동일 이름의 상수 멤버 함수와 비 상수 멤버 함수"를 만들 수 있다.

3) 상수 멤버 함수 안에서 "모든 멤버는 const"이다.

4) 함수를 선언과 구현으로 분리할 때는 "선언과 구현 모두에 const를 표기"해야 한다.

*/

#include "Point.h"

Point::Point(int a, int b) 
    : x(a), y(b)
{
    
}
void Point::set( int a, int b ) 
{
     x = a; y = b; 
}
void Point::print() const
{
    std::cout << x << ",  " << y << std::endl;
}