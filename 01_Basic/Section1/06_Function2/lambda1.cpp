// 람다 표현식(Lambda expression)
// 1) 일반적인 함수
//  => global space에 만들어 놓고 필요할 떄 "함수의 이름을 사용해서 호출"한다.
// 2) 람다 표현식(Lambda expression)
//  => 코드 안에서 "이름이 없는 함수를 만들어서 사용" 하는 것.
//  => "익명의 함수(anonymous function)", "함수 리터럴(literal)"
//  => "함수 반환타입과 이름을 제거"하고 "[]"를 표기한다.

#include <iostream>

void foo(int a)
{
    std::cout << "foo : " << a << std::endl;
}

int main()
{
    foo(1); // 함수 (함수 인자) : 함수 호출
    
    // 람다 표현식
    [](int a)
    {
        std::cout << "foo : " << a << std::endl;
    } (10);
}