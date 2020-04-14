// Inline Funciton
// 함수 반환 타입 앞에 "inline"을 표기한 함수
// 함수 호출 시 함수로 이동하지 않고 "함수의 기계어 코드를 치환"한다.
// 장점
// - 실제 함수 호출보다 "빠르다."
// 단점
// - 치환되는 함수가 큰 경우 "목적 코드가 커질수 있다."
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
    int n1 = add1(1,2);
    int n2 = add2(1,2);
    int n3 = add2(1,2);
}
