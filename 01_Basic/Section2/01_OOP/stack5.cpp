// Stack 만들기 단계 5 - 초기화를 자동으로

// 1) Stack을 사용하려면 항상 init 함수를 먼저 호출해서 초기화해야 한다.
//  => 자동으로 초기화 할 수 없을까?

// 2) 생성자
//  => "클래스 이름과 동일한 이름"을 가지는 함수
//  => "리턴 타입은 표기하지 않는다."
//  => 변수(객체)를 생성하면 자동으로 생성자가 호출된다.

// 3) Stack 타입의 변수(객체)를 생성하면 필요한 "초기화가 자동으로" 이루어진다.

#include <iostream>

class Stack
{
private:
    int buf[10];
    int idx;
    
public:
    Stack()           { idx = 0; } // 생성자
    void push( int a) { buf[idx++] = a; }
    int pop()         { return buf[--idx]; }
};

int main()
{
    Stack s1;
    //s1.init();
    s1.push(10);
    std::cout << s1.pop() << std::endl;  
}





