#include <iostream>
#include <typeinfo>

int foo(int a, double d)
{
     return 0;
}

int main()
{
    foo(1, 3.1);
    
    decltype( foo )  d1;        // 함수 타입 - int(int, double)
    decltype( &foo ) d2;        // 함수 포인터 타입 - int(*)(int, double)
    decltype( foo(1, 3.1) ) d3; // 함수 반환 타입 - int
                                // 실제로 함수가 호출되는 것은 아님(평가되지 않은 표현식, unevaluated expression)
    
    
    std::cout << typeid(d1).name() << std::endl;
    std::cout << typeid(d2).name() << std::endl;
    std::cout << typeid(d3).name() << std::endl;
    // build 시 c++filt -t 옵션 추가
    
    
    const int c = 0;
    std::cout << typeid(c).name() << std::endl; // 
}










