// Function Template
// 타임만 다르고 "구현이 동일하거나 유사한 함수"가 여러개 있다면 개발자가 직접 만들지 말고, "컴파일러가 함수를 생성"하게 하자.
// 컴파일러가 함수를 생성할 때 사용할 "함수의 틀(template)"이 있어야 한다.
// "개발자는 함수 템플릿을 만들고", "컴파일러가 템플릿을 사용해서 필요한 함수를 생성"하게 한다.
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
    square(3);
    square(3.3);
}
