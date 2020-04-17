// if constexpr
// 1) if
//  => "실행시간"에 조건식을 조사
// 2) if constexpr
//  => "컴파일 시간"에 조건식을 조사
//  => "조건식은 반드시 컴파일 시간에 값을 결정"할 수 있어야 한다.
//  => "static if" 라고도 불리는 문법

int main()
{
    int n = 0;
    
    if ( n == 0 )
    {
        //....
    }
    
    /*
    if constexpr ( n == 0 ) // error
    {
        //....
    }
    */
    
    if constexpr ( sizeof(n) == 0 ) // ok..
    {
        //....
    }
}