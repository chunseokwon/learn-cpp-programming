# 실습과제1
C언어에서는 2개의 정수 값을 교확하기 위해서는 아래와 같이 swap 함수를 만들어서 사용합니다.

```
#include <iostream>
void Swap(int* x, int* y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

int main()
{
	int a = 10, b = 20;
	Swap(&a, &b);
	std::cout << a << ", " << b << std::endl;
}
```

## 실습문제1
포인터 대신 참조(Reference)를 사용해서 만들어 보세요.

## 실습문제2
int 타입 대신에 모든 타입에 사용할 수 있도록 함수 템플릿으로 만들어 보세요.

## 실습문제3
Swap 함수를 전역 공간에 놓지 말고 Util이라는 namespace 안에 넣고, main 함수에서 Swap를 사용하는 코드도 만들어 보세요.

## 실습문제4
C++ 표준에는 이미 swap 함수를 템플릿 버전으로 제공하고 있습니다. swap 함수를 사용하려면 ```<algorithm>``` 사용해야 합니다. 또한, swap 함수는 std namespace 안에 있습니다. C++ 표준에 있는 swap를 사용해보세요.