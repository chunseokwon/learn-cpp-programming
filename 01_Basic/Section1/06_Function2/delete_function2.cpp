// 함수를 제공하지 않는 것 vs 함수를 삭제하는 것
// 1) 함수를 제공하지 않으면
// => 함수 호출 시 "인자의 암시적 형 변환을 통해서 호출 가능한 함수"를 찾게 된다.
// 2) 함수를 선언만 제공하면
// => 함수 호출 시 "링크 에러(link error)" 발생
// 3) 함수를 삭제(delete)하면
// => 함수 호출 시 "컴파일 에러(compile error)" 발생

int gcd(int a, int b)
{
    return b != 0 ? gcd(b, a % b) : a;
}

//double gcd(double a, double b); // 함수 선언만

double gcd(double a, double b) = delete;

int main()
{
    gcd(2, 10);    // ok

    gcd(2.2, 4.3); // gcd(double, double)
}
