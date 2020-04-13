constexpr double pi = 3.14;

int main()
{
    int n = 10;
    
    const int c1 = 10; // 컴파일 시간 상수. 배열 크기
    const int c2 = n;  // 실행시간 상수. 배열 크기 안됨...
    // const
    // "컴파일 시간 상수"와 "실행시간 상수"를 모두 만들 수 있다.
    // "변수 값으로 초기화"할 수 있다.
    
    constexpr int c3 = 10; // ok
    constexpr int c4 = n;  // error
    // constexpr
    // "컴파일 시간 상수"만 만들수 있다.
    // "컴파일 시간에 계산될 수 있는 값"으로만 초기화 가능
    // "템플릿 인자로 사용"될 수 있다.
}
