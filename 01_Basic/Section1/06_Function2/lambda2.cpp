// 람다 표현식의 모양
// 1) 일반 함수의 모양에서 "함수 반환타입과 이름을 제거"하고 "[]"를 표기한다.
// 2) "[]"
//  => "lambda introducer"
//  => 람다 표현식이 시작됨을 나타낸다.

#include <iostream>

int add(int a, int b) { return a + b;}

int main()
{
    int n1 = add(1, 2);
    
    // 람다 표현식 생성, 함수
    [](int a, int b) { return a + b;};
    
    int n2 = [](int a, int b) { return a + b;}(1,2); // 함수 호출
    
    std::cout << n1 << ", " << n2 << std::endl;
}