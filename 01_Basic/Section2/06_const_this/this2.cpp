/*

1) 이름 충돌 시
=> 멤버의 이름과 지역변수(함수인자)의 이름이 동일할 때 지역변수가 우선시 된다.
=> "this를 사용하면 멤버에 접근" 할 수 있다.

2) this를 반환하는 함수
=> this 또는 *this를 반환하면 "멤버 함수를 연속적으로 호출" 할 수 있다.
=> cout의 원리

[주의] 참조 반환
=> *this를 반활 할 때는 임시객체의 생성을 막기 위해 "참조를 반환"해야 한다.

*/

#include <iostream>

class Point
{
    int x = 0;
    int y = 0;
public:
    //Point* set(int x, int y)
    //Point set(int x, int y)
    Point& set(int x, int y)
    {
        this->x = x; 
        this->y = y; 
        
        return *this;
    }
};
int main()
{
    Point p1;
    //p1.set(10,20)->set(30,40)->set(40,50);
    p1.set(10,20).set(30,40).set(40,50);
    
    //cout << "A" << "B" << "C";
}
