
//typedef int DWORD;
//typedef void(*F)(int, int);

using DWORD = int;
using F = void(*)(int, int);

// using
// 기존 "타입의 별칭(alias)"을 만들때 사용
// c++11부터 도입

// using vs typedef
// typedef는 "타입의 별칭만 만들수 있다."
// using은 타입뿐 아니라 "템플릿의 별칭"도 만들 수 있다.
// "template alias"라고도 함

int main()
{
    DWORD n; // int n
    F f;     // void(*f)(int, int)
}
