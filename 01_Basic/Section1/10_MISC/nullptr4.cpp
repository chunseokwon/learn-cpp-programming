// nullptr과 데이터 타입
// 1) nullptr은 "std::nullptr_t" 타입

// nullptr_t 타입과 형변환
// 1) std::nullptr_t 타입은 "모든 타입의 포인터로 암시적 변환된다."
// 2) std::nullptr_t 타입은 "int 타입으로 변환될 수 없다."
// 3) std::nullptr_t 타입은 "bool 타입으로 직접 초기화(direct initialization) 시 초기값으로 사용이 가능"하다.
//  => 복사 초기화 시 error가 발생한다.

int main()
{
    0;       // int
    0.0;     // double
    nullptr; // std::nullptr_t
    
    int*  p1 = nullptr;
    char* p2 = nullptr;
    void(*f)() = nullptr;
    
    int n1 = nullptr; // error
    int n2 = 0;
    
    // bool b1 = nullptr;   // error
    bool b2(nullptr);       // ok
    bool b3{nullptr};       // ok
    // bool b4 = {nullptr}; // error
}
