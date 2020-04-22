// C 언어 방식 캐스팅의 단점
// 1) 논리적으로 위험한 캐스팅도 아무런 경고 없이 허용한다.
//  => 개발자의 의도인지 실수인지를 명확하게 구별할 수 없다.
// 2) C++ 언어의 해결책
//  => 용도 별로 다른 캐스팅 방법을 사용하자.
//  => 용도 별로 4개의 캐스팅 연산자가 제공된다.

#include <iostream>

int main()
{
    int n = 0;
    //double* p1 = &n;        // error
    double* p1 = (double*)&n; // ok
    *p1 = 3.4;
    
    
    const int c = 10;
    //int* p2 = &c;     // error 
    int* p2 = (int*)&c; // ok
    *p2 = 20; 
    
    std::cout << c << std::endl; // 10 ? 20
}
