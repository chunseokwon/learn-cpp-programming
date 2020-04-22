// 0의 특징
// 1) 0은 "정수, 실수, bool, 포인터 등의 변수를 초기화"할 떄 사용 가능.
// 2) 0은 "정수형 literal이고 int 타입"
//  => 0은 int 타입이지만, "실수, bool, 포인터 타입으로 암시적 형 변환"될 수 있다.

// 리터럴(literal)과 데이터 타입
// 1) 리터럴(literal)
//  => 소스 코드 내에서 사용되는 "고정된 값"
//  => 변수 초기화에서 구문 등에서 많이 사용된다.
//  => 모든 리터럴은 "데이터 타입이 있다."
// -----------------------------------------------------------------------------------
// literal값       종류             데이터 타입
// -----------------------------------------------------------------------------------
// 0           정수형 literal          int
// 0.0         실수형 literal          double
// flase       boolean literal        bool
// -----------------------------------------------------------------------------------

#include <iostream>

//void foo(int    n) { std::cout << "int"    << std::endl; }
void foo(double d) { std::cout << "double" << std::endl; }
void foo(bool   b) { std::cout << "bool"   << std::endl; }
void foo(char*  s) { std::cout << "char*"  << std::endl; }

int main()
{
    int    n = 0;
    double d = 0; 
    bool   b = 0;  // "aaa"
    char*  s = 0;
    
    // foo(0);     // int
    // foo(0.0);   // 실수 리터럴
    // foo(false); // bool
    // foo( (char*)0 ); // char*, 포인터 리터럴
    foo( nullptr );     // char*, 포인터 리터럴
}
