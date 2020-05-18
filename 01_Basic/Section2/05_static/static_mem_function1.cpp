/*

1) 정적 멤버 함수(static member function)
=> 객체 없이 호출 가능한 멤버 함수
=> 클래스 이름::함수이름() 으로 호출

2) 정적 멤버 함수를 호출하는 2가지 방법
=> 클래스 이름으로 호출
=> 객체 이름으로 호출

3) 객체이름 보다는 "클래스 이름을 사용"하는 것이 좋다.

*/

class Car
{
    int speed;
    static int cnt; 
public:    
    Car()  {++cnt;}
    ~Car() {--cnt;}
    
    static int getCount() { return cnt;}
};
int Car::cnt = 0;   // 

int main()
{
    // 자동차 갯수를 알고 싶다.
    // getCount() 
    Car::getCount(); // 클래스 이름으로 호출
    
    Car c1, c2, c3;
    
    c1.getCount();   // 객체 이름으로 호출
}


