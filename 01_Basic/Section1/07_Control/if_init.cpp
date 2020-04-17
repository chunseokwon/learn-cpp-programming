// if init, switch init
// 1) "조건문(if, switch)"을 만들때 "초기화 구문을 추가" 할 수 있다.
// 2) "C++17"부터 지원하는 문법

int foo() { return -1;}

int main()
{
    /*
    int ret = foo();
    
    if ( ret == -1 )
    {
        //....
    }
    */
    if ( int ret = foo() ; ret == -1  )
    {
        
    }
    
    
    /*
    int n = foo();
    switch( n )
    {
    case 10: break;
    case 20: break;
    }
    */
    
    switch( int n = foo(); n )
    {
    case 10: break;
    case 20: break;
    }
}








