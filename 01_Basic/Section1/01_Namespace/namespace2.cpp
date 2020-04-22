#include <stdio.h>

namespace Audio
{
    void init()  { printf("Audio init\n"); }
    void reset() { printf("Audio reset\n");}
}
using namespace Audio; // using directive

void init()  { printf("global init\n"); }

int main()
{
    Audio::init(); // 한정된 이름(qualified name)
    
    //using Audio::init; // using 선언(declaratin) - init 함수는 Audio 이름 없이 사용가능
    //init();
    //reset(); // error
    
    //using namespace Audio; // using 지시어(directive) - namespace의 모든 요소를 이름없이 사용가능
    ::init();
    reset();
}
