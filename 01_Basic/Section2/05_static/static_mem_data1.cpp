/*

정적 멤버 데이터(static member data)
1) 객체의 생성과 소멸
=> 모든 객체는 생성될 때 "생성자를 호출"하고
=> 모든 객체는 파괴될 때 "소멸자를 호출"한다.

2) "객체가 몇 개 성성되었는지 개수를 알고 싶다"면
=> 생성자에서 변수 값을 "+1"
=> 소멸자에서 변수 값을 "-1"

3) "객체의 개수를 관리할 변수"가 필요하다.

*/

/*

1) 멤버 데이터를 사용해서 객체의 개수를 관리하는 경우
=> 멤버 데이터는 "객체당 하나씩 별도의 메모리 공강" 사용
=> 객체의 개수는 "항상 1"이다.

2) 전역 변수를 사용해서 객체의 개수를 관리하는 경우
=> 전역 변수는 "메모리에 하나만 있고, 모든 객체가 공유"
=> 모든 객체가 공유하므로 객체의 개수를 구할 수 있다.
=> 실수로 "외부에서 cnt 변수값을 변경"한다면?

*/

#include <iostream>

int cnt = 0; // 전역 변수

class Car
{
    int speed;
    int color;
public:
    //int cnt = 0; // 멤버 변수
    
    Car()  {++cnt;}
    ~Car() {--cnt;}
};

int main()
{
    Car c1;
    Car c2;
    Car c3;
    
    cnt = 0;
    
    //std::cout << c1.cnt << std::endl;
    std::cout << cnt << std::endl;
}