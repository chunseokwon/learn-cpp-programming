#include <iostream>
#include <string>

int main()
{
    std::string s1 = "hello";
    std::string s2 = "world";
    
    s1 = s2; // 대입
    
    if ( s1 == s2 ) 
    {
        std::cout << "same" << std::endl;
    }  // 비교 
    
    std::string s3 = s1 + s2;
    std::cout << s3 << std::endl;

    // C++ 언어에서의 문자열
    // "std::string 타입 (STL의 string 클래스)"를 사용
    // <string> 헤더
    // 문자열관련 연산이 정수형 변수처럼 "직관적으로 사용"할 수 있다.
}
