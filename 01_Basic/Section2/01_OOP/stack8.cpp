// Stack 만들기 단계 8 - 클래스 템플릿

// 1) Stack은 int뿐 아니라 다른 타입 버전도 필요하다.
//  => 클래스 템플릿

// 2) 하나의 스택에 여러 가지 타입이 보관되는 것이 아니라, 각각의 타입을 저장하는 별도의 Stack 클래스 코드를 컴파일러가 생성하는 것

// 3) 주의 사항
//  => 클래스를 템플릿으로 만들 시 함수의 구현부도 반드시 헤더 파일에 있어야 한다.
//  => 멤버 함수를 클래스 외부에 구현할 수 있지만 외부 구현 자체도 헤더에 놓아야 한다.

#include <iostream>

template<typename T>
class Stack
{
private:
    T* buf;
    int idx;
    
public:
    Stack(int size = 10) 
    {
         idx = 0; 
         buf = new T[size];
    }
    ~Stack() { delete[] buf;}

    void push( T a) { buf[idx++] = a; }
    T pop()         { return buf[--idx]; }
};

int main()
{
    Stack<int> s1(30);
    Stack<double> s2(30);
    
    s1.push(10);
    std::cout << s1.pop() << std::endl;  
}
