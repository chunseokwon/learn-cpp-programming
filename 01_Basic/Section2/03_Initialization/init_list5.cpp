/*

멤버 데이터를 초기화하는 3가지 방법
1) member field initialization
=> 생성자로 전달된 값을 사용할 수 없다.

2) member initializer list
=> 가장 널리 사용되는 방법
=> 대입이 아닌 "초기화"

3) 생성자 블록 안에서 초기화
=> 초기화가 아닌 "대입"

4) 클래스를 선언과 구현으로 분리하는 경우
=> 초기화 리스트는 구현부에 작성한다. - Point.cpp 참고

*/

#include <iostream>

class Point
{
    int x = 0; // C++11
    int y = 0;
public:
    Point(int a, int b) : x(a), y(b)
    {
        x = a;
        y = b;
    }
};

int main()
{
    Point p(1,2);
}
