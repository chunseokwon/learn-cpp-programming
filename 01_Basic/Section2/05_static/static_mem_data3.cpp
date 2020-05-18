/*

1) 정적 멤버 데이터를 만드는 방법
=> 클래스 안에 변수 선언부를 제공하고, "클래스 외부(소스파일)에 정의(definition)을 제공"한다.

*/

#include <iostream>

int cnt = 0;

class Car
{
public:
    int speed;
    int color;
    
    static int cnt; // declaration
    
    Car() {}
};


int Car::cnt = 0;   // definition

int main()
{
    // 정적 멤버 데이터는 객체가 없어도 메모리에 놓인다.
    // 클래스 이름으로 접근 가능
    Car::cnt = 10;
    
    Car c1, c2, c3;
}
