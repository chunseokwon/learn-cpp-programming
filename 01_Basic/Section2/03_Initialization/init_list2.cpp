/*

반드시 멤버 초기화 리스트를 사용해야 하는 경우
1) 클래스 안에 멤버 데이터가 "const 또는 reference"로 되어 있을 때

*/

#include <iostream>

class Point
{
    int x;
    int y;
    const int cval;
    int& r;
public:
    Point( int a, int b, int c) : x(a), y(b), cval(c), r(a)
    {
    //    cval = c; // 대입
    //    x = a;
    //    y = b;
    }
};

int main()
{
    Point p(1, 2, 10);

//    const int cval;
//    cval = 10;
}
