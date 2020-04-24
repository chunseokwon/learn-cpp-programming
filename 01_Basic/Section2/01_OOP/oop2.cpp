// Obejct Oriented Programming

// 1) 프로그램에서 "필요한 타입을 먼저 설계"한다.

// 2) 현실세계에 존재하는 사물은 "상태"와 "동작"이 있다.

// 3) 타입을 설계할 때
//  => 상태와 동작을 표현할 수 있어야 한다.
//  => "상태는 변수"로, "동작은 함수"로 표현한다.

// 4) C의 구조체와 C++의 구조체
//  => C   : 데이터만 표현할 수 있다.
//  => C++ : 데이터뿐 아니라 "함수도 포함할 수" 있다.

struct Complex
{
    double real;
    double image;
};

Complex add(const Complex& c1, const Complex& c2)
{
    Complex temp;
    temp.real = c1.real + c2.real;
    temp.image = c1.image + c2.image;
    
    return temp;
}

int main()
{
    Complex c1 = { 1, 1}; // 1 + 1i
    Complex c2 = { 2, 2}; // 2 + 2i
    
    Complex ret = add(c1, c2);
}
