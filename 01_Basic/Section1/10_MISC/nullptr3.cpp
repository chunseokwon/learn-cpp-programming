// nullptr과 코드 가독성
// 1) 0을 사용하는 것보다 "nullptr을 사용하는 것이 코드 가독성"이 좋다.

int* foo() { return 0; }

int main()
{
    auto ret = foo();
    
    //if ( ret == 0 ) // foo()의 반환 타입을 int로 잘못 인식할 수 있다.
    if ( ret == nullptr )
    {
        //...
    }
}














