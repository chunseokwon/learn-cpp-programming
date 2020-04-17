// 함수 인자 전달 방식

#include <iostream>

void f1(int n)  { ++n;}    // call by value, 원본을 수정할 수 없다.
void f2(int* p) { ++(*p);} // call by pointer(c에서 call by reference라고 부른 방식), 원본을 수정할 수 있다.
void f3(int& r) { ++r;}    // int& r = c, call by reference, 원본을 수정할 수 있다.

int main()
{
    int a = 0, b = 0, c = 0;
    
    f1(a);
    f2(&b); // b가 변경될 수 있다고 예측 가능.
    f3(c);  // c가 변경될 것이라고 예측하기 어렵다.
    
    std::cout << a << std::endl; // 0
    std::cout << b << std::endl; // 1
    std::cout << c << std::endl; // 
    
    int* p = &n;
    int& r = n;
}