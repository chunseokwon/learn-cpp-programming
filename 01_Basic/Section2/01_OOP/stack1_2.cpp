// 2) 2개 이상의 스택이 필요하면 어떻게 해야 할까?
//  => push, pop 함수의 인자로 버퍼와 인덱스를 전달한다.

#include <iostream>

void push(int* buf, int* idx, int value)
{
    buf[++(*idx)] = value;
}

int pop(int* buf, int* idx)
{
    return buf[(*idx)--];
}

int main()
{
    int buf1[10];
    int idx1 = 0;
    int buf2[10];
    int idx2 = 0;
    push(buf1, &idx1, 10);
    push(buf1, &idx1, 20);
    push(buf2, &idx2, 30);
    
    std::cout << pop(buf1, &idx1) << std::endl;  // 30
    std::cout << pop(buf1, &idx1) << std::endl;  // 20
}