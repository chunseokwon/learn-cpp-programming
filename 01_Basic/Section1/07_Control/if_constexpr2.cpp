// if constexpr 활용
// 1) 함수 템플릿을 만들때 조건에 따라 "특정 코드를 생성하지 못하게 할 때"

template<typename T> 
void foo(T a)
{
    // if ( 0 )
    if constexpr ( 0 )
        *a = 0;
}

int main()
{
    int n = 0;

    foo(&n); // T : int*
    foo(n);  // T : int
}