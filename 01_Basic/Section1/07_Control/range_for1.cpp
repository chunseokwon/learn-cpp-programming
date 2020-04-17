// renge-for
// 1) C++11부터 지원되는 "새로운 모양의 반복문"
// 2) Java/C#의 "foreach"와 유사한 구문
// 3) 배열뿐 아니라 "STL의 다양한 컨테이너(list, vector, set 등)를 사용 가능"
// 4) "auto"와 같이 사용되는 경우가 많이 있다.

#include <iostream>

int main()
{
    int x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    for ( auto n : x )
    {
        std::cout << n << " , ";
    }
    
    
    /*
    for ( int i = 0; i < 10; i++)
    {
        std::cout << x[i] << ", ";
    }
    */
    
}


