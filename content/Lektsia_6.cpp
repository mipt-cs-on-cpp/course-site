������ 6
(basic facilities, ���������� -- �� �����)

������������ ����, ���������� ����������.
����������� -- ��� ����� � ������.
������ -- �������, �����, ...

���������
- ����.���.
- ������ � �������
class Text; // Graph_lib::Text ...
std::vector

Text_box
gl_text, gl_shape

namespace MyNS
{
	int f();
	double g(int);
	class X;
}

int x = MyNS::f();

// ===================================

int f() {...};

int g()
{
	int f;
	f(); // error
	::f();
}

// =====================================

using-declaration
std::string
void g()
{
	using std::string;
	using std::cout;

	cout << ...

	// string ������ std::string
}

// ==========================================

namespace NS0
{
	void f(int);
	void f(char);
	void f(double);
}

NS0::f(1.0); // double

using NS0::f;

f(3), f('a'), f(1.0);

int global = 0;

void g()
{
	// ���� ���-��

	{
		int x;
		using std::string;
		// code
		// x ������������
	}

	// code
}

// =====================================

using namespace std;
using namespace NS0;

// =====================================

ADL (argument dependent lookup)
-- ����� ��������� �� ���������, ����� ʸ����

namespace NS1
{
	struct S;
	void f(S);
}

NS1::S s;
f(s); // ����� ������

// ===================================

namespace NS2
{
	// ��������� ���� ������ ���
	void f(������ ���); // 
}

void f(���������� ������� �� ������ ���);

int main()
{
	f(������ );
}

// ==============================================

namespace A
{
	void f();
}

// code -- ������ A::f

namespace A
{
	void g();
}

// code -- � A::f � A::g

using std::string;
using MYNS::string;
string str;

// ===============================

namespace Very_Long_Name_Namespace
{

}

namespace VRNN = Very_Long_Name_Namespace;
// ��������� -- alias

namespace A
{
	namespace B
	{
		void f()
	}
}

A::B::f();

// =========================================
���������� ����������.
#include <vector> // vector.hpp#

#define

#ifdef 
...
#else
...
#endif

#pragma

���� ����������(translation unit)

.cpp, ����������� �������������->���� ����������

#include <vector>
#include "MyFile.hpp"

1) �� - ������ -- ��������� ����������
2) ������ �������� � ������� �������
3) ��������� �� ��������� ���������
4) ��������� �������������
5) ���������� ���������� � ����������

������ 1
��� - ��, ��������, � - �
-���������
-����������
������ 2
std::sort(..., ..., ...);
������������ ������ ���������
������ 3
������������ ������ ���������

.hpp < - ���������; // file.hpp
.cpp < - ����������; // file.cpp

// file.cpp
class MyClass
{
public:
	void some_func();
};
void MyClass::some_func()
{

}

.cpp main
#include "file.hpp"

// ===========================================

ODR -- one definition rule

file1.cpp
struct S { int a, int b; };

file2.cpp
struct S { int a, int bb; };

// =============================================

file.hpp
// #pragma once // MS VS
#ifndef FILE_HPP
#define FILE_HPP
//code
#endif

#ifdef FILE_HPP
// code
#elif !defined(MY_FILE)
//code
#endif




