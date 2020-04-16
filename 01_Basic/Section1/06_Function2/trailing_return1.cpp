// 후위 반환 타입(trailing return type)
// 1) 함수를 만들 때 사용하는 "새로운 표기법"
//  => 함수의 "이름 앞에는 auto"를 적고, 괄호 뒤쪽에 "-> 반환타입"을 적는 표기법
// 2) "trailing return type" 또는 "suffix return type"
// 3) "C++11"부터 지원
// "람다 표현식"이나 "함수 템플릿"을 만들 때 주로 사용

// int square(int a)
auto square(int a) -> int
{
    return a * a;
}

// int main()
auto main() -> int
{
    square(3);
}