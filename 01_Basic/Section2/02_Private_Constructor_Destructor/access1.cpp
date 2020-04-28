/*

접근 지정자(Access Specifiers)
1) 멤버 데이터를 "외부에서 직접 접근하면 객체가 잘못된 상태를 가지겔 될 수" 있다.

2) "멤버 함수를 통해서만 멤버 데이터를 변경" 할 수 있게 한다.
=> 멤버 함수는 "인자의 유효성 여부를 조사" 할 수 있다.

3) 접근 지정자(access specifiers)
------------------------------------------------------------
private   : 멤버 함수에서만 접근 할 수 있는 멤버
public    : 멤버 함수가 아닌 함수에서도 접근 가능한 멤버
protected : 자신과 파생 클래스의 멤버 함수에서 접근 가능한 멤버
------------------------------------------------------------

4) 멤버 데이터 와 멤버 함수
=> 멤버 데이터는 private 만드는 경우가 많다.
=> 멤버 함수는 public 영역에 만드는 경우가 많다.

*/

//struct Bike
class Bike
{
//private:
    int color;
    int gear;
    
public:
    void changeGear(int n)
    {
        if ( n < 1 ) return;
        
        gear = n;
    }
    int getGear() { return gear;}
};

int main()
{
    Bike b;
    //b.gear = -7; // error. private 멤버 이므로
    
    b.changeGear( -7 );
    int n = b.getGear();
}

/*

용어 정리 - 정보은닉, 캡슐화, setter/getter
1) 객체의 "사용자는 객체 내부 멤버 데이터의 구조에 대해서는 알 필요가 없다." 멤버 함수만 알면된다.
=> 정보 은닉(information hiding)

2) 멤버 함수를 통해서만 객체의 상태를 변경할 수 있기 때문에 "객체의 상태를 항상 안전하게 유지"할 수 있다.

3) setter/getter
=> 멤버 데이터의 값을 변경하거나 얻기 위해 사용하는 멤버 함수를 나타내는 용어

*/