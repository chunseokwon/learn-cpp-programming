// C 언어와 C++ 언어에서의 동적 메모리 할당
// 1) C 언어
//  => "malloc으로 할당"하고 "free로 해지"gksek.
//  => C언어에서는 캐스팅이 필요없지만, C++에서 malloc 사용 시 "반환되는 주소는 원하는 포인터 타입으로 캐스팅"해야 한다.
// 2) C++
//  => "new로 할당"하고 "delete로 해지"한다.
//  => new가 반환한 주소를 "캐스팅할 필요 없다."
//  => 배열 형태로 할당한 경우는 "delete[]"로 해지해야 한다.
// 3) malloc은 생성자를 호출하지 못하지만 "new는 생성자를 호출"한다.

#include <cstdlib>  

int main()
{
    int* p1 = (int*)malloc(sizeof(int)*10);
    free(p1);
    
    
    int* p2 = new int; // int 한개, 4byte
    delete p2;
    
    int* p3 = new int[10];
    //delete[] p3; // 배형 형태로 할당한 경우의 해지
    delete p3;     // 미정의 동작(undefined) - 표준문서에 언급이 없으며, 컴파일러 마다 동작 다르다.
    
    int* p4 = new int[10][2]; // 80byte
    delete[] p4;
}
