// template parameter
// "컴파일 시간에 전달"되어서 "함수가 생성"
// 함수가 생성되는 과정을 "템플릿 인스턴스화(template instantiation)"이라고 한다.
template<typename T> // template parameter
// template<class T> // template parameter를 표기할 때 "typename" 또는 "class" 키워드 사용가능

// call parameter
// "실행시간에 함수에 전달"
T square(T a)        // call parameter
{
    return a * a;
}

int main()
{
    // square<int>(3);
    // square<double>(3.3);
    
    // 함수 템플릿 사용시 타입을 명시적으로 지정하지 않으면 "함수 호출 인자를 보고 컴파일러가 결정(type deduction, 추론/연역)"
    square(3);
    square(3.3);
}
