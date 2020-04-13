int main()
{
    const int c1 = 10;
    c1 = 20;   // error

    constexpr int c2 = 10;
    c2 = 20;   // error
    // constexpr
    // 컴파일 시간 상수를 만드는 새로운 키워드
    // "컴파일 시간에 결정되는 상수 값"으로만 초기화할 수 있다.
    // C++11에서 도입된 문법
}
