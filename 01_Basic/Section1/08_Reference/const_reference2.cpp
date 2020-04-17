// 함수 인자 전달 방법 정리
// 1) 함수 안에서 인자의 값을 변경하고 싶다면
//  => 포인터 또는 참조 사용해서 전달 받는다.
// 2) 함수 안에서 인자의 값을 변경하지 못하게 하려면
// ------------------------------------------
// primitive type   : call by value가 좋다.
// user define type : const reference가 좋다. 
// ------------------------------------------

#include <iostream>

void foo(int x)           // call by value
// void foo(const int& x) // const reference
{
}

int main()
{
    int n = 10;
    
    // foo 함수에서는 절대로 n의 값을 변경하면 안된다.
    foo(n);
    
    std::cout << n << std::endl; // 반드시 10이 나와야 한다.
}
