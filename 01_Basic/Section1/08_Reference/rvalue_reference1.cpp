// rvalue reference
// 1) lvalue와 rvalue
//  rvalue : 등호(=)의 오른쪽에만 올 수 있는 것
//  lvalue : 등호(=)의 오른쪽과 왼쪽에 모두 올 수 있는 것
// 
// 2) reference 규칙
//  lvalue reference : lvalue 만 가리킬 수 있다.
//  const lvalue reference : lvalue와 rvalue를 모두 가리킬 수 있다.
//  rvalue reference : rvalue 만 가리킬 수 있다. - C++11에서 추가

int main()
{
    int v1 = 0, v2 = 0;
    
    v1 = 10; // ok       10 : rvalue
    10 = v1; // error    v1 : lvalue
    v2 = v1; 
    
    // lvalue reference
    int& r1 = v1; // ok 
    int& r2 = 10; // error

    const int& r3 = v1; // ok 
    const int& r4 = 10; // ok
    
    // rvalue reference : rvalue 만 가리킨다.
    int&& r5 = v1; // error. 
    int&& r6 = 10; // ok
}