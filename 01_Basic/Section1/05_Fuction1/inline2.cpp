
int add1(int a, int b)
{
    return a + b;
}

inline int add2(int a, int b)
{
    return a + b;
}

int main()
{
    int n1 = add1(1,2); // 호출
    int n2 = add2(1,2); // 치환
}
// 치환된 내용은 어셈블리 코드로 확인할 수있다.
// "어셈블리 소스 코드"를 확인하는 방법
// => cl 소스이름.cpp /FAs
// => g++ 소스이름.cpp -S

// 인라인 함수의 실제 치환 여부는 "컴파일러 종류", "컴파일 옵션", "함수 크기"등에 따라 달라진다.
// => cl 컴파일러의 경우 "/Ob1" 옵션 사용시 치환 적용
// => g++은 "-fno-inline", "-finline-small-functions", "-findirect-inlining" 등 수많은 옵션이 존재.