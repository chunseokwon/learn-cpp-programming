// C++ 표준과 stack
// 1) STL
//  => C++에서 제공하는 표준 라이브러리
//  => Standard Template Library

// 2) STL에서 제공하는 stack
//  => <stack> 헤더
//  => 클래스 템플릿으로 되어 있다.

// 3) STL stack의 주요 멤버 함수
// push : 스택에 요소를 넣는다.
// top : 스택에 꼭대기에 있는 요소 얻기 - 주의. 요소가 제거되지 않음
// pop : 스택에 있는 요소 제거 - 주의. 요소가 반환되지 않음

#include <iostream>
#include <stack>

int main()
{
    std::stack<int> s;
    
    s.push(10);
    s.push(20);
    
    s.push(30);
    
    std::cout << s.top() << std::endl; // 30
    std::cout << s.top() << std::endl; // 30
    
    s.pop();
    std::cout << s.top() << std::endl; // 20
}