// nullptr
// 1) C++11부터 도인된 "새로운 키워드(keyword)"
// 2) "널 포인터 값(null pointer value)"을 나타내는 "포인터 리터럴(pointer literal)"
// 3) 포인터 변수를 초기화 하기 위해 기존의 방식대로 "0을 사용해도 되지만 nullptr을 사용하는 것"이 "안전"하고 "코드의 가독성"을 높일 수 있다.

int main()
{
    int* p1 = 0;
    int* p2 = nullptr;
}
