/*

1) "mutable" 멤버 데이터
=> 상수 멤버 함수 안에서도 값을 변경할 수 있다.

2) "동일 이름의 상수 멤버 함수와 비 상수 멤버 함수"를 만들 수 있다.

3) 상수 멤버 함수 안에서 "모든 멤버는 const"이다.
*/

class Test
{
    int data;
public:
    //int* getData() const 
    const int* getData() const 
    {
        // data는 상수이다.. : const int data
         return &data;
    }
};

int main()
{
    
}