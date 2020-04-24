// Stack 만들기 단계 2

// 1) "구조체"를 사용해서 "Stack" 타입을 설계

// 2) push 함수의 모양
// -----------------------------------------------------------------------------------
// Stack 타입이 없다면 : void push(int* buf, int* idx, int n)
// Stack 타입이 있다면 : void push(Stack* s, int n)
// -----------------------------------------------------------------------------------

// 3) 단점
//  => Stack의 "상태를 나타내는 데이터와 상태를 조작하는 함수가 분리"되어 있다. push와 pop 함수가 "1번째 인자로 Stack을 전달" 받아야한다.
//  => push, pop 함수 이외의 함수에서도 idx와 buf에 접근할 수 있다.

// 3) 상태를 나타내는 데이터와 상태를 조작하는 "함수를 묶으면" 어떨까?

#include <iostream>

struct Stack
{
    int buf[10];
    int idx;
};

void push(Stack* s, int value)
{    
    s->buf[s->idx++] = value;
}

int pop(Stack* s)
{    
    return s->buf[--(s->idx)];
}

int main()
{
    Stack s1;
    Stack s2;
    s1.idx = 0;
    s2.idx = 0;
    push(&s1, 10);
    push(&s1, 20);
    s1.idx = 0;
    push(&s1, 30);
    
    std::cout << pop(&s1) << std::endl;  // 30
    std::cout << pop(&s1) << std::endl;  // 20
}