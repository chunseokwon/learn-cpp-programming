// NULL과 nullptr
// -----------------------------------------------------------------------------------
// C   : void* => 다른 타입* 암시적 변환 허용
// C++ : void* => 다른 타입* 암시적 변환 안됨
// -----------------------------------------------------------------------------------

// NULL
// 1) C/C++에 따라 "구현 방법이 다르다."
// 2) "컴파일러의 종류, 버전에 따라서도" 구현 방법이 다르다.
// 3) 일반적으로 C++ 컴파일러는 "정수 리터럴 0"으로 정의 하는 경우가 많다.

// 포인터 변수를 초기화 하거나 값을 조사할 때는 "0 또는 NULL을 사용하지 말고 nullptr을 사용하자."

#include <iostream>

void foo(int   n) { std::cout << "int"   << std::endl; }
void foo(void* p) { std::cout << "void*" << std::endl; }

void goo(char* n) { std::cout << "goo" << std::endl; }

/*
#ifdef __cplusplus
    #define NULL 0
#else
    #define NULL (void*)0
#endif
*/

int main()
{
    foo(0);        // int
    foo((void*)0); // void*
    foo(NULL);     // int
    
    goo(NULL);     //  ok
}
