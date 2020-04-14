// 주의사항
void f1(int a) {}
void f1(double d) {} // ok
f1(3.4);

void f2(int a) {}
void f2(int a, int b) {} // ok

// 1. 인자의 개수가 달라도 "디폴트 값"이 있는 경우는 주의해야 한다.
void f3(int a) {}
void f3(int a, int b = 0) {} // error
f3(10);

// 2. "함수 반환 타입만 다른 경우"는 오버로딩할 수 없다.
int    f4(int a) { return 0;}
double f4(int a) { return 0;} // error
f4(10);

// 3. "정수 타입과 포인터 타입에 대한 오버로딩"은 사용하지 않는 것이 좋다.
void f5(int   n) {}
void f5(char* s) {}
f5(0);        // f5(int);
f5((char*)0);
f5(nullptr);  // f5(char*) // C++11

int main()
{
}
