// 레퍼런스(reference)
// 1) 변수
//  => "메모리의 특정 위치를 가리키는 이름"
//  => 코드 안에서 해당 메모리에 접근하기 위해서 사용
// 2) 레퍼런스 변수
//  => "기존 변수(메모리)에 또 다른 이름(alias)을 부여" 하는 것

#include <iostream>

int main()
{
    int n = 10;
    
    n = 20;
    
    // int* p = &n;
    int& r = n; // 레퍼런스 
    
    r = 30; // n = 30

    std::cout << n << std::endl; // 30
    std::cout << r << std::endl; // 30
    std::cout << &n << std::endl;
    std::cout << &r << std::endl; 
}
