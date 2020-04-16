// constexpr funtion
// constexpr 키워드
// "컴파일 시간의 의미"를 가지는 키워드 - C++11
// 
// 활용1. constexpr 상수
//  => constexpr int c = 10;
// 활용2. constexpr funcitn
// 활용3. if constexpr
//  => if constexpr (c == 1)

constexpr int add(int a, int b)
{
    return a + b;
}

int main()
{
    add(1, 2);
}