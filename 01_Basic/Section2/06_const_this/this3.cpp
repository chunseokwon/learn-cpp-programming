/*

1) 정적 멤버 함수(static member function) 안에서는 " this를 사용할 수 없다."

*/


#include <iostream>

class Test
{
public:
    static void foo()
    {
        std::cout << this << std::endl;
    }
};

int main()
{
    Test::foo();
    
    Test t;
    t.foo();
}