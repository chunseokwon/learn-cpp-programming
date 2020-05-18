/*

1) 정적 멤버 함수의 특징
=> "객체 없이 호출 가능"한 멤버 함수
=> 일반 멤버(데이터, 함수)에 접근할 수 "없다."
=> 정적 멤버(데이터, 함수)에 접근할 수 "있다."


2) 일반 멤버 함수 vs 정적 멤버 함수
일반 멤버 함수: 각각의 객체에 대한 개별 연산
정적 멤버 함수: 모든 객체의 공통에 대한 연산

*/

class Test
{
    int        data1;
    static int data2; 
public:
    static void foo()
    {
        data1 = 0; // error
        data2 = 0; // ok
        goo();     // error
    }
    void goo()
    {
        data1 = 0; // ok
        data2 = 0; // ok
        foo();     // ok
    }    
};
int Test::data2 = 0;
int main()
{
    Test::foo();
    Test t;
    t.goo();
}
