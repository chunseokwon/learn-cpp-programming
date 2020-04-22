// const int형 변수의 주소를 char* 변수에 담아보세요.

int main()
{
    const int c = 10;
    
    //char* p = static_cast<char*>(&c);
    
    //char* p = const_cast<char*>(&c);
    
    //char* p = reinterpret_cast<char*>(&c);
    
    char* p1 = reinterpret_cast<char*>( const_cast<int*>( &c ) );         // 방법1

    char* p2 = const_cast<char*>( reinterpret_cast<const char*>( &c ) );  // 방법2
                
    char* p3 = (char*)&c; // c 언어에서 사용하는 방법
}
