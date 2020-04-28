/*

위임 생성자(delegate constructor)
1) 생성자에서 다른 생성자를 호출하는 문법
=> C++11부터 지원하는 문법
=> 클래스의 "구현부에 표기"한다. - Point.h, Point.cpp 참고

*/

class Point
{
    int x, y;
public:
    Point() : Point(0, 0) // 위임 생성자
    {
    //    x = 0;
    //    y = 0;
    }
    Point(int a, int b) 
    {
        x = a;
        y = b;
    }
};

int main()
{
    Point p;
}
