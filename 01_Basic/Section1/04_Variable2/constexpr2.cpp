
void foo( const int s)
{
    int arr[s]; // ???
}

int main()
{
//    foo(10);
//    foo(n);
    
    int arr1[10]; // ok
    
    
    int s1 = 10;
    //int arr2[s1]; // g++ : ok.
                    // cl : error

                    // C89(1989년에 표준화된 문법)
                    // "컴파일 시간에 크기를 알수 있어야 한다."

                    // C99(1999년에 표준화된 문법)
                    // 배열의 크기로 "변수도 사용가능"
                    // g++은 지원하지만 cl 컴파일러는 지원하지 않는다.
    
    const int s2 = 10;
    int arr3[s2];    // ok
                     // 컴파일 시간에 값을 알 수 있다.
    
//    const int s3 = s1;
//    int arr4[s3];  // error
                     // 컴파일 시간에 값을 알 수 없다. 값이 실행시간에 결정된다.
}
