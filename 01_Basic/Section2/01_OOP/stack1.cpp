// Stack 만들기 단계 1

// 1) "전역변수"를 사용해서 버퍼와 인덱스를 관리

// 2) 2개 이상의 스택이 필요하면 어떻게 해야 할까?
//  => push, pop 함수의 인자로 버퍼와 인덱스를 전달한다.
//  => stack1_2.cpp

// 3) 연관된 데이터를 묶어서 "Stack" 타입을 만들면 어떨가?
//  => 구조체 도입

#include <iostream>

int buf[10];
int idx = 0;

void push(int value)
{    
    buf[idx++] = value;
}
int pop()
{    
    return buf[--idx];
}
int main()
{
    push(10);
    push(20);
    push(30);
    
    std::cout << pop() << std::endl;  // 30
    std::cout << pop() << std::endl;  // 20
}