/*

소멸자(destructor)
1) C 스타일 코드의 단점
=> 획득한 자원은 "반드시 사용자가 직접 반납" 해야 한다.
=> 자원의 핸들을 담은 "변수에 직접 접근" 할 수 있다.

2) 자원 할당과 자원 해지가 필요한 코드
=> C++을 사용해서 "생성자에서 자원을 할당"하고 "소멸자에서 자원을 해지"하면 자동으로 자원이 관리된다.
=> RAII(Resource Acquizion Is Initalization)

*/

#include <stdio.h>

int main()
{
    FILE* f = fopen("a.txt", "wt");

    f = 0;
    
    fputs("hello", f);

    //fclose(f);
}