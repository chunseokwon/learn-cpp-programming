// 람다 표현식의 활용
// 1) sort 함수
//  => 배열의 시작 주소와 마지막 다음 주소를 받아서 요소를 "퀵소트 알고리즘으로 정렬"하는 C++ 표준 함수
//  => 3번째 인자로 "함수를 전달"하면 요소의 비교정책을 변경할 수 있다.
//  => <algorithm> 헤더
// 2) 함수가 필요한 곳에 "함수 이름 대신 람다 표현식을 사용"할 수 있다.

#include <iostream>
#include <algorithm>

bool cmp( int a, int b) { return a > b;}

int main()
{
    int x[10] = {1,3,5,7,9,2,4,6,8,10};
    
    //std::sort(x, x+10);      // 시작, 마지막 요소의 다음 주소

    //std::sort(x, x+10, cmp); // 시작, 마지막 요소의 다음 주소,  크기 비교 함수
    
    std::sort(x, x+10, []( int a, int b) { return a > b;} ); 
    
    for( auto n : x )
        std::cout << n << ", ";
}