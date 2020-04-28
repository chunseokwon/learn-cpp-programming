/*

멤버 초기화 리스트(member list initializer)
1) 멤버 초기화 리스트(member list initializer)란?
=> 생성자 괄호() 뒤에 "콜론(:)을 표기하고 멤버를 초기화 하는 것"

2) 특징
=> 대입(assignment)이 아닌 "초기화(initialization)"

*/


#include <iostream>

class Point
{
    int x;
    int y;
public:
    Point( int a, int b) : x(a), y(b) // 초기화
    {
    //    x = a;    // 대입
    //    y = b;
    }
};

int main()
{
    Point p(1, 2);

    int a = 0; // 초기화. 생성자 호출
    
    int b;     // 생성자 호출
    b = 0;     // 대입. 대입 연산자 호출
}
