// 포인터(pointer)와 레퍼런스(reference)
// 1) 유사한 점
//  => "기존 변수(메모리)를 가리킨다."
// 2) 차이점
//                      포인터                                레퍼런스
// -----------------------------------------------------------------------------------
// 초기화:    변수 주소로 초기화, 초기화 생략 가능    |    변수 이름으로 초기화, 초기화값이 반드시 필요
// 요소접근:   *연산자 사용, *p1 = 10            |    *연산자가 필요없다. r1 = 10;
// null:    NULL 값을 가질 수 있다.             |    NULL 값을 가질 수 없다.
// 주소출력:  포인터 변수의 주소                   |    기존 변수와 동일 주소
// -----------------------------------------------------------------------------------

#include <iostream>

int main()
{
    int n = 10;
    
    int* p1 = &n;
    int& r1 = n;
        
    int* p2 = 0; // null pointer 가능
    int& r2;     // error.
    
    *p1 = 20;
    r1 = 20; // 자동 * 연산되는 포인터
    
    if ( p1 != 0 ) {}
    if ( r1 != 0 ) {} // r1은 if 문으로 조사할 필요없다.
    
    std::cout << &p1 << std::endl;
    std::cout << r1 << std::endl;
}