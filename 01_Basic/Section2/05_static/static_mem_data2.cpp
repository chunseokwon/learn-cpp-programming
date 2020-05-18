/*

1) 객체의 개수를 관리하는 변수
=> "모든 객체가 공유"해야 한다.
=> 외부에 "잘못된 사용으로부터 보호" 할 수 있어야 한다.

2) 정적 멤버 데이터(static member data)
=> "static이 붙은 멤버 데이터"
=> "모든 객체가 공유" 한다
=> 클래스 "내부에 선언(declaration)"을 만들고
=> 클래스 "외부에 정의(definition)"를 만들어야 한다.

3) 정적 멤버 데이터의 특징
=> "모든 객체가 공유"한다.
=> 멤버이므로 "접근 지정자를 사용" 할 수 있다.

*/


#include <iostream>

//int cnt = 0; // 전역 변수

class Car
{
    int speed;
    int color;
    static int cnt; // 정적
    
public: 
    Car()  {++cnt;}
    ~Car() {--cnt;}
    
    int getCount() { return cnt;}
};
int Car::cnt = 0;


int main()
{
    Car c1;
    Car c2;
    Car c3;
    
    //cnt = 0;
    
    std::cout << c1.getCount() << std::endl;
    //std::cout << c1.cnt << std::endl;
    //std::cout << cnt << std::endl;
}
