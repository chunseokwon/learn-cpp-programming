// constexpr function의 제약
// 1) C++11에서는 constexpr 함수가 컴파일 시간에 수행되기 위한 "제약 조건을 많이 가지고 있었다."
//  => return 문장이 한번만 나와야 한다.
// 2) C++14에서는 "대부분 제약이 사라지고 일부 조건"만 남아있다.
//  => "파일을 오픈"하거나, "동적으로 메모리를 할당"할 수 없다.
//  => "가상함수가 될수 없다."
//  => "cppreference.com" 참고

#include <iostream>

constexpr int factorial(int n )
{
    if ( n == 1 ) 
        return 1;
    return n * factorial( n-1 );
}

int main()
{
    int n = factorial(5);

    std::cout << n << std::endl;
}