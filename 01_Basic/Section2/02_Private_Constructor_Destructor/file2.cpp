/*

1) C++에서 가장 널리 사용되는 코딩 스타일
=> "생성자에서 자원을 할당"한다.
=> "소멸자에서 자원을 반납"한다.
=> 자원의 번호를 담은 멤버 변수는 private 영역에 놓고 "외부에서 직접 접근할 수 없게" 만든다.

*/

#include <iostream>
#include <cstdio>
#include <string>

class File 
{
    FILE* file = 0;
public:
    File( std::string filename, std::string mode)
    {
        file = fopen(filename.c_str(), mode.c_str() );
    }
    ~File()
    {
        fclose(file);
    }
    // RW 함수들
    void puts( std::string s)
    {
        fputs( s.c_str(), file);
    }
};

int main()
{
    File f("a.txt", "wt");
    f.puts("hello");
    
    
//    FILE* f = fopen("a.txt", "wt");
//    f = 0;
//    fputs("hello", f);
//    fclose(f);
}
