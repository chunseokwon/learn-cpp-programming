// constexpor function의 의미
// 1) 함수의 인자 값을 컴파일 시간에 결정할 수 있으면 "컴파일 시간에 함수를 실행"
// 2) 함수의 인자 값을 컴파일 시간에 결정할 수 없으면 "실행시간에 함수를 실행"

// template parameter
// 1) 템플릿 인자로 타입뿐 아니라 "정수형 상수"도 사용할 수 있다.
// 2) 모든 템플릿 인자는 "컴파일 시간에 결정"되어야 한다.
template<typename T, int N>
struct Buffer
{
    T data[N];
};

constexpr int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x = 1;
    int y = 1;
    
    int n1 = add(1, 1);
    int n2 = add(x, y);
    
    Buffer<int, 1024> b1;
    // Buffer<int, x> b2;        // error
    Buffer<int, add(1,2)> b2;    // ok
    // Buffer<int, add(x,2)> b2; // error
}
