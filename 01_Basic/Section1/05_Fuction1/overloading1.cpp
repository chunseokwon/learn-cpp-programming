// Function Overloading
// C 언어에서는 "동일한 이름의 함수를 2개 이상 만들수 없다."
// C++ 언어에서는 "동일한 이름의 함수를 여러개 만들수 있다."
// => 단, 함수 호출 시 구별할 수 있도록, "인자의 개수나 인자의 타입이 달라야"한다.
// 함수 사용자 입장에서는 동일한 함수처럼 생각하게 되므로 "일관된 형태의 라이브러리"를 구축할 수 있다.
int square(int a)
{
    return a * a;
}

double square(double a)
{
    return a * a;
}

int main()
{
    sqaure(3);
    sqaure(3.3);
}
