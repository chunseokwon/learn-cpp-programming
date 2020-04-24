// Stack 만들기 단계 4 - 정보 은닉
// 1) 접근 지정자
//  => private : 멤버 함수에서만 접근할 수 있다.
//  => public  : 멤버 함수가 아닌 함수에서도 접근할 수 있다.
// 
// 2) 정보 은닉(information hiding)
//  => 멤버 변수를 외부에서 직접 접근할 수 없게 하고, 멤버 함수를 통해서만 멤버 변수에 접근하게 한다.
//  => 외부의 잘못된 사용으로 객체의 상태가 불안정 해지는 것을 막는다.
//  => 사용자는 Stack의 내부 구조인 buf와 idx를 알 필요가 없다. push, pop, init 함수만 알면 된다.
// 
// 3) struct vs class
//  => struct : 접근 지정자 생략 시 디폴트가 public
//  => class  : 접근 지정자 생략 시 디폴트가 private

#include <iostream>

//struct Stack
class Stack 
{
// private: // 접근 지정자
    int buf[10];
    int idx;
    
public:     // 접근 지정자
    void init() { idx = 0;}
    
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
    s1.init();
    s2.init();
    s1.push(10); 
    s1.push(20);
    
    std::cout << s1.pop() << std::endl;  // 30
    std::cout << s1.pop() << std::endl;  // 20
}