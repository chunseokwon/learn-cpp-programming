// Delete Function
// "함수를 삭제"하는 방법
// 삭제된 함수를 호출하면 "컴파일 시간에 오류"가 발생한다.

void foo(int) = delete; // 함수 삭제

int main()
{
    foo(10); // 컴파일 에러.
}
