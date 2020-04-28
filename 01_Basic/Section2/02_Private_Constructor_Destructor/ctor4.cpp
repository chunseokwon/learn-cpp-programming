/*

default constructor, delete constructor
1) Point() = default;
=> "컴파일러에게 디폴트 생성자를 만들어 달라"는 문법
=> 클래스 선언부에만 표기하면 되고 구현부는 만들지 않아도 된다. - Point2.h, Point2.cpp 참고

*/

class Point
{
    int x;
    int y;
public:
    
    //Point() = delete;
    Point() = default;
    //Point() {}
    
    Point(int a, int b) {}
};

int main()
{
    Point p1;
    Point p2(1,2); // ok
}
