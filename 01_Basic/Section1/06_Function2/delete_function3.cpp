// 함수를 삭제하는 이유
// 1) 암시적 변환에 의한 "의도하지 않은 함수가 호출되는 것을 막기" 위해
// 2) 템플릿이 "특정 타입의 함수를 생성하지 못하게" 하기 위해
// 3) "컴파일러가 자동으로 생성하는 멤버함수를 사용하지 못하게(생성하지 못하게)" 하기 위해 "가장 널리 사용"

template<typename T> 
T square( T a )
{
    return a * a;
}

char square(char) = delete;

int main()
{
    square(3);
    square(3.3);
    square('a'); // error.
}