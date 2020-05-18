/*

1) 객체를 여러 개 생성 할 때
=> 멤버 데이터는 "객체당 한 개씩 메모리에 놓이게"된다.
=> 멤버 함수는 "객체의 개수에 상관없이 코드 메모리에 한 개"만 있다.


2) this
=> 멤버 함수 안에서 사용 가능한 "키워드"
=> 자신을 호출한 "객체의 주소"를 담고 있다.

*/

#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    void set(int a, int b)
    {
        std::cout << this << std::endl;
        x = a; 
        y = b; 
    }
};
int main()
{
    Point p1;
    Point p2;
    
    p1.set(10, 20);
    p2.set(30, 40);
    
    std::cout << &p1 << std::endl;
    std::cout << &p2 << std::endl;
}
