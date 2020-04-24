// Stack 만들기 단계 3

// 1) "상태를 나타내는 데이터와 상태를 조작하는 함수를 묶는다."
//  => C++ 언어는 "구조체가 함수를 포함"할 수 있다.
//  => 멤버 함수와 멤버 데이터
//  => 멤버 함수에서는 멤버 데이터에 접근할 수 있다.

// 2) push 함수의 모양
// -----------------------------------------------------------------------------------
// Stack 타입이 없다면 : void push(int* buf, int* idx, int n)
// Stack 타입이 있다면 : void push(Stack* s, int n)
// 멤버 함수로 만들면   : void push(int n)
// -----------------------------------------------------------------------------------

// 3) 단점
//  => push, pop 뿐 아니라 모든 함수에서 idx에 접근할 수 있다. 사용자가 "idx에 잘못된 값을 넣으면" 어떻게 될까?
//  => "잘못 사용하기 어렵게" 만들수 없을까?

#include <iostream>

struct Stack
{
    int buf[10];
    int idx;
    
    void push(int value)
    {
        buf[idx++] = value;
    }
    int pop()
    {
        return buf[--idx];
    }
};

int main()
{
    Stack s1;
    Stack s2;
    s1.idx = 0;
    s2.idx = 0;
    //push(&s1, 10);
    s1.push(10);
    s1.push(20);
    
    s1.idx = 0; // 단점
    std::cout << s1.pop() << std::endl;  // 30
    std::cout << s1.pop() << std::endl;  // 20
}