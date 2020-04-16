// 후위 반환 타입 표기법이 필요한 경우

template<typename T1, typename T2>
//decltype(a + b) add(T1 a, T2 b)

//auto add(T1 a, T2 b) -> decltype(a + b) // C++11 
auto add(T1 a, T2 b) // C++14 
{
    return a + b;
}

int main()
{
    add(1, 2.1);
    
    // a = 10;
    // int a;
}