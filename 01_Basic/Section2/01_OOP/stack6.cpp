// Stack 만들기 단계 6 - 소멸자

// 1) 사용자가 Stack의 버퍼 크기를 변경할 수 있도록
//  => 배열이 아닌 메모리 동적 할당 사용
//  => new로 할당된 메모리를 사용 후 반드시 delete 해야 한다.

// 2) 소멸자(destructor)
//  => "~클래스 이름()"의 모양의 함수
//  => 리턴 타입을 표기하지 않으며 인자도 가질 수 없다.
//  => 변수(객체)가 파괴 될 때 자동으로 호출된다.
//  => 변수(객체)가 생성자에서 자원을 할당한 경우 소멸자에서 자원을 반납한다.

#include <iostream>

class Stack
{
private:
    int* buf;
    int idx;
    
public:
    Stack(int size = 10)
    {
         idx = 0; 
         buf = new int[size];
    }
    ~Stack() { delete[] buf;} // 소멸자
    
    void push( int a) { buf[idx++] = a; }
    int pop()         { return buf[--idx]; }
};

int main()
{
    Stack s1(30);
    s1.push(10);
    std::cout << s1.pop() << std::endl;  
}





