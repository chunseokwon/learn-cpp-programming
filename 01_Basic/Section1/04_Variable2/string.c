#include <stdio.h>
#include <cstring>  //<string.h>

int main()
{
    char s1[32] = "hello";
    
    const char* s2 = "world";
    
    //s1 = s2;           // 대입
    strcpy( s1, s2);
    
    //if ( s1 == s2 ) {} // 비교
    if ( strcmp(s1, s2) == 0) {}

    // C 언어에서의 문자열
    // "char" 또는 "char 배열" 사용
    // 대입 또는 비교 시 "문자열 전용 함수"를 사용해야 한다.
    // 문자열 연산이 "직관적이지 않다."
    // <string.h> 또는 <cstring>
}
