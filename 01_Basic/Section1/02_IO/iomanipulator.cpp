// iomanpulator
// - 입출력의 형태를 지정하기 위해 사용
// - "조정자 함수" 또는 "조작자 함수"라고도 표현

// std::dec     변수값을 10진수로 출력
// std::hex     변수값을 16진수로 출력
// std::setw    문자열 출력시 개수 지정
// std::setfill 공백을 채울 문자 지정
// std::left    왼쪽 정렬(align)
#include <iostream>
#include <iomanip> // setw()를 사용하기 위해 필요
//using namespace std;

int main()
{
        //cout << hex << n << endl;

        int n = 10;

        std::cout << n << std::endl;  // 10진수

        std::cout << std::hex; // 16진수로 출력하겠다.

        std::cout << n << std::endl;  // 16진수

        std::cout << std::hex << n << std::endl;  // 16진수

        std::cout << std::dec;
        std::cout << n << std::endl;  // 10진수

        std::cout << "hello" << std::endl;

        std::cout << std::setw(10) << std::setfill('#')
                  << std::left     << "hello" << std::endl;
}

