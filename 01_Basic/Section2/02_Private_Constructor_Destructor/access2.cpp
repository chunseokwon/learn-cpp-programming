/*

friend 함수 개념
1) friend 함수
=> "멤버 함수는 아니지만 private 멤버에 접근" 할 수 있게 하고 싶을 때

2) 왜 멤버 함수로 만들지 않는가?
=> "멤버 함수로 만들 수 없는 경우"가 있다.
=> 연산자 재정의 참고

3) 왜 getter/setter를 사용하지 않는가?
=> "getter/setter를 제공하면 모든 함수에서 접근" 할 수 있다.
=> 모든 함수가 아닌 "특정 함수에서만 접근" 할 수 있게 하고 싶을 때

*/

class Airplane
{
    int color;
    int speed;    
    int engineTemp;
public:
    int getSpeed() { return speed;}
    
    friend void fixAirplane(Airplane& a);
};

void fixAirplane(Airplane& a)
{
    int n = a.engineTemp;
}

int main()
{
    Airplane a;
    fixAirplane(a);
}
