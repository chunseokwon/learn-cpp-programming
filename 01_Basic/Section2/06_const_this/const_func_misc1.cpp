/*

1) "mutable" 멤버 데이터
=> 상수 멤버 함수 안에서도 값을 변경할 수 있다.

2) "동일 이름의 상수 멤버 함수와 비 상수 멤버 함수"를 만들 수 있다.

3) 상수 멤버 함수 안에서 "모든 멤버는 const"이다.

4) 함수를 선언과 구현으로 분리할 때는 "선언과 구현 모두에 const를 표기"해야 한다.

*/


class Test
{
public:
    void foo() {}       // 1
    void foo() const {} // 2
};

int main()
{
    Test t1;
    t1.foo();  // 1번 호출, 없으면 2번 호출
    
    const Test t2;
    t2.foo();   // 2번 호출, 없으면 error
}