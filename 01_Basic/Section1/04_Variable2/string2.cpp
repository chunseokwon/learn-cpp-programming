#include <iostream>
#include <string>

void foo( const char* s) 
{
    printf("foo : %s\n", s);
}

int main()
{
    std::string s = "hello";
    
    foo(s);              // error
    foo((const char*)s); // error
    foo( s.c_str() );    // ok
    // str::string과 C언어 호환
    // string 타입의 변수를 const char*로 변환하려면 "c_str() 멤버 함수"를 사용
    // 멤버 함수의 개념은 "Object Oriented Programming 섹션" 참고
}
