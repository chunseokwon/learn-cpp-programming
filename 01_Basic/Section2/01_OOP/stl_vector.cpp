// C++ 표준과 vector

// 1) C 배열의 단점 - 크기를 변경할 수 없다.

// 2) STL vector
//  => 배열과 유사하게 연속된 메모리를 사용하는 컨테이너
//  => <vector> 헤더 파일
//  => 배열과 동일한 방법으로 사용가능 - [] 연산 사용 가능
//  => 크기를 조절할 수 있다. - resize 멤버 함수

#include <iostream>
#include <vector>

int main()
{
    // int x[10] = {1,2,3,4,5,6,7,8,9,10};
    
    // std::vector<int> x;
    // std::vector<int> x(10);
    
    std::vector<int> x = {1,2,3,4,5,6,7,8,9,10};
    
    x[0] = 10;
    
    x.resize(20);
    
    for( int i = 0; i < x.size() ; i++)
        std::cout << x[i] << std::endl;
}