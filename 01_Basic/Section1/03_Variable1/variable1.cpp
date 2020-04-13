struct Point
{
    int x = 0; // 구조체를 만들때 "멤버를 초기화"할 수 있다(C++11)
    int y = 0;
};

int main()
{
    //if ( 1 ) {} 
    int n = 0;
    
    //struct Point pt;
    
    Point pt; // 구조체를 사용할 때 "struct를 표기하지 않아도"된다.
    
    int n1 = 0b10; // 2진수 표기법(C++11)
    int n2 = 1'000'000; //자릿수 표기법(C++11)
    
    bool b = true; // false
    
    long long n3 = 10; // 64bit 정수
    
    char* s1 = "aaa";
    wchar_t* s2 = L"AAA";
}
