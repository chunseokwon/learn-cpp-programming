/*

1) C++11부터 일반 멤버 데이터는 멤버 필드 초기화를 사용가능 하지만 정적 멤버 데이터는 필드 초기화를 사용할 수 없다.
=> "클래스 외부에 정의에서 초기값을 지정해야 한다"


*/

class Test
{
public:
    int data = 0; // C++11 부터 가능.

    // static int sdata1 = 0;  // error
    static int sdata1;         //  선언(declaration)
    
    static const int        sdata2 = 0; // ok
    // static const double     sdata3 = 0; // error
    static constexpr int    sdata4 = 0; // ok
    static constexpr double sdata5 = 0; // ok
    
    inline static int       sdata6 = 0; // C++17, inline을 사용하면 외부 정의가 필요없다.
};
int Test::sdata1 = 0; // 정의(definition)

int main()
{
    int n1 = Test::sdata1;
    int n2 = Test::sdata2;
    //int n3 = Test::sdata3;
    int n4 = Test::sdata4;
    int n5 = Test::sdata5;
    int n6 = Test::sdata6;
}
