/*

explicit 생성자

객체를 초기화하는 방법
------------------------------------------------------------
직접 초기화 : = 없이 초기화 하는 것
복사 초기화 : =를 사용해서 초기화 하는 것
------------------------------------------------------------

함수 인자를 전달과 초기화 방법
1) 함수 인자 전달 시 복사 초기화를 사용한다.
2) 특정 클래스 설계 시 복사 초기화를 사용하지 못하게 하는 것이 좋을 때가 있다.

explict 생성자
1) 객체를 초기화 할 때 직접 초기화만 사용할 수 있고, 복사 초기화는 사용할 수 없다.

*/


#include <iostream>

class OFile
{
    FILE* file;
public:
    explicit OFile(const char* filename)
    {
        file = fopen(filename, "wt");
    }
    ~OFile() { fclose(file); }
};

void foo( OFile f) {} // OFile f = "hello";

int main()
{
    OFile f1("a.txt");  // 직접 초기화
    OFile f2 = "a.txt"; // 복사 초기화, error
    
    foo( f1 );
    foo("hello"); // error
    
}

