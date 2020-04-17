# Learn C++ Programming
C++ 학습 프로그램의 학습 내용 정리입니다.


## 1. C++ Programming Basic
C++언어의 기본 문법과 객체지향 프로그래밍 기술을 배우는 과정입니다. C++98/03 문법 뿐 아니라 C++11/14/17 의 내용도 배우게 됩니다. 본 과정은 C++의 특정 주제를 깊이 있게 다루기 보다는 C++의 전체적인 특징을 빠르고 효율적으로 습득할수 있도록 구성되었습니다.
C++은 C언어의 모든 요소를 포함 하지만, 본 과정에서는 C 의 기본 요소(포인터, 함수등)를 별도로 다루지 않습니다.

#### Course Curriculum
- Section 0: Orientation
- Section 1: C++ Better Than C
- Section 2: Object Oriented Programming
- Section 3: Inheritance
- Section 4: Operator Overloading
- Section 5: STL
- Section 6: ETC
- Section 7: Advanced Topic


## 2. Design Pattern In C++
본 과정은 C++을 사용해서 다양한 객체지향 디자인 기법을 배우는 과정입니다. 전통적인 객체지향 디자인 뿐 아니라 C++기반의 오픈소스가 사용하는 다양한 디자인 기법을 배울수 있습니다.
본 과정을 수강하기 위해서는 C++ 언어와 약간의 STL 라이브러리에 대한 지식(vector와 반복자의 개념)이 필요합니다.

#### Course Curriculum
- Section 0: Orientation
- Section 1: Warming Up
- Section 2: 공통성과 가변성의 분리
- Section 3: 재귀적 포함
- Section 4: 간접층의 원리
- Section 5: 통보, 열거, 방문
- Section 6: 객체를 생성하는 방법


## 3. C++ Intermediate
C++ 관련 고급 문법과 다양한 고급 테크닉을 배우는 과정입니다. C++ 언어의 문법들을 다양한 관점에서 깊이 있게 살펴 보고, C++ 진영에서 사용되는 다양한 코딩 관례, 테크닉을 깊이 있는 관점에서 배우게 됩니다. C++98/03 문법 뿐 아니라 C++11/14 그리고 C++17/20 의 내용도 배우게 됩니다. C++ 문법 뿐 아니라 “C++ IDioms” 라고 알려져 있는 다양한 테크닉도 배우게 됩니다.

#### Course Curriculum
- Section 0: Orientation
- Section 1. C++ 기본 문법 다시 보기
- Section 2. C++ 11/14/17 기본 문법
- Section 3. rvalue 와 move semantics
- Section 4. Perfect forwarding
- Section 5. Lambda Expression


## 4. C++ Template Programming
C++의 Template 기술은 C++ 에서 가장 신기하고, 재미있고, 깊이있는 분야 입니다. C++로 만들어진 다양한 라이브러리 안에는 Template 을 사용한 고급 코드를 많이 볼수 있습니다. 하지만, Template 은 일반 개발자가 아닌 라이브러리 설계자들이 널리 사용하는 기술이기 때문에, 대부분의 C++ 교육에서는 Template 의 개념 정도만 다루고 있습니다. 그래서, 오픈소스에서 볼수 있는 다양한 고급 기법을 정확히 이해하기는 어려움이 있습니다. 또한, C++의 표준 라이브러리인 STL을 깊이 있게 이해 하기 위해서도 Template 기술은 필수입니다. 본 과정은 C++언어의 Template 분야에 대한 다양한 문법과 기법을 배우는 과정입니다.
본 과정에서는 다음과 같은 내용을 배울수 있습니다.
1. C++ Template과 관련된 다양한 기본/고급 문법을 배우게 됩니다.
2. 문법 뿐 아니라 Traits, Lazy Instantiation, Type Selection, declval 등 다양한 기법을 배우게 됩니다.
3. SFINAE, enable_if, IfThenElse, Member Detect 등 Template 관련 다양한 C++ IDioms 을 배우게 됩니다.
4. CRTP, Thin Template, Policy-Base Design, rebind 등 Template 관련 디자인 기법을 배우게 됩니다.
5. C++98/03 뿐 아니라 C++11/14 그리고 C++17/20에서 추가되는 최신 내용도 배우게 됩니다.

#### Course Curriculum
- Section 0: Orientation
- Section 1: Template Instantiation
- Section 2: Template 기본 문법
- Section 3: Template Specialization
- Section 4: Type Traits
- Section 5: Variadic Template
- Section 6: Template Design
- Section 7: C++20


## 5. C++ STL Programming
본 과정은 C++ 표준 라이브러리인 STL에 대해서 배우는 과정입니다. 단순한 STL의 사용법 뿐 아니라 STL의 주요 요소를 직접 구현해 보면서 STL의 설계 철학도 배우게 됩니다. 본 과정에서는 다음과 같은 내용을 배울수 있습니다.
1. STL의 단순한 개념뿐 아니라 iterator_category, iterator_traits 등의 깊이 있는 개념을 배우게 됩니다.
2. shared_ptr<>, weak_ptr<>, unique_ptr<>등의 스마트 포인터에 대해서 배우게 됩니다.
3. thread/future/async 등 스레드 관련 라이브러리를 배우게 됩니다.

#### Course Curriculum
- Section 0: Orientation
- Section 1: STL Preview
- Section 2: 구현을 통해서 이해하는 STL의 설계 철학
- Section 3: Iterator
- Section 4: Algorithm
- Section 5: Container
- Section 6: Utility
- Section 7: Concurrency


## Build
#### g++ compiler
g++ hello.cpp -std=c++1z

#### MS cl compiler
cl hello.cpp /std:c++latest /nologo /EHsc /Za


## 출처
- ecourse.co.kr
- https://github.com/codenuri/CPP1