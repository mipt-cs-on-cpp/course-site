������ 4.
�������.

1946, 

RT f(AL);
RT -> auto

������� ������ ���� ��������.
�������� ������� ����.
printf -- C

//=============================

void f(int); // forward-declaration

int main()
{
	// f
}

void f(int i)
{
	int result = ...;
	//
	return result; // return-statement
}

int fact(int n)
{
	return (n > 1) ? n * fact(n - 1) : 1;
}

// =======================================

int f(int i) // ����� �� �� ������
{
	return ++i;
}

// ���-�� ����� ����������

int result = f(5);

// �������-����� �������, ������� ����������
// � ������ �������� inline

constexpr int f(int i)
{
	retur i + 1;
}

void g(int n)
{ // compile-time (CT)
	int a = f(5); // ����� ���� ��������� CT
	int b = f(n); // ������ run-time
	constexpr int c = f(6); // ������ CT
	constexpr int d = f(n); // error

	// use c
}

[[...]] -- �������

[[noreturn]] void f()
{
	/// ...
	return;
}

void f(int & a)
{
	static int value = 0; // ����������� ��� ���. ����.
	std::cout << ++value << ' ' << ++a;
}

// ����������
int a = 0;
f(a); f(a); f(a);

1 2
2 2
3 2

��������� ��������:
�� ���������
�� ������
�� ��������
// const

// ========================================

��������� �� ���������

f(my_arg, arg = 0); // python

f(x,y,z)

void f(int x, int y = 0, int z = 0)
{ // trailing arguments

}

f(1, 2, 3);
f(1, 2);
f(2);

void f(int, char * = nullptr);
// ������� ������������� �����

void f(int x, char * ptr = nullptr)
{
	//
}

a *= b; // a = a * b

a+++++1; // error
(++a) = 1;
a++ = 1;

// =================================

���������� �������.
�����������.

void print(int);
void print(const char *); // ��� �����
void print(double);
void print(long);
void print(char);

void print(int)
{
	// 1
}

void print(double)
{
	// 2
}
// ���-�� ����������
print(5.0f);
char c;
int i;
short s;
float f;
print(c, i, s, f);
print('a', 49, "a", nullptr)

void f(int a, int b);
void f(double a, double b);
void f(int a, double b);

f(2.0, 2);

// =========================================

���- � �����������

int area(int a, int b)
{
	// ����������� a>0 && b>0
	// ����������� result > 0 && result == a*b
	return a * b;
}

area(INT_MAX, 1000); // ��� �� ������� ������������

// ===========================================

��������� �� �������.

void error(std::string s) {...}

void(*ptr)(std::string); // int * ptr;

void f()
{
	ptr = &error; // ptr = error;
	(*ptr)("error"); // ptr("error");
}

STL algorithms

sort(..., ..., predikat)
{
	predikat(..., ...);
}

bool compare(..., ...) {...}

sort(..., ..., compare)

// ������
// ��������� �� �-��
// �������������� �������

int x;
MyType x; // ���� ��������� �������� ()
x(a,b,c);

// =========================================
������� -- �� ������������

#define VALUE 1000
#define max(a,b) (a>b)?a:b;

int x = VALUE;

int i = 0;
std::cout << max(++i, ++i);
std::cout << (++i > ++i) ? ++i : ++i;

C -- ������� ������������;

#include <...>

__DATE__
__TIME__
__FILE__
__LINE__
__FUNC__ / __FUNCTION__

void f()
{
	std::cout << __FUNCTION__;
}

#include <cassert>

void f(int i)
{
	assert(i > 0);
	// ...
}

// debug
// release

// ===========================================

void print() {};

int main()
{
	int print();
	// {}
	// = {}
	// = 
	// ()
	// print

	std::cout << print() << std::endl;
}

memcpy
strlem
strcmp
strncmp

class Data
{
public:
	Data(int v) : value(v) {}
	Data & operator=(const Data & d) = default;
	// �������� ���. �����.
	Data(const Data & d) = default;
	// ���. �����������
private:
	int value;
};


Data d1(10), d2(20);

Data d3(d1);

// d3.value == d1.value

d2 = d1; // d2.value = d1.value;

std::vector < int > v;
std::vector < int > b;
std::copy(v.begin(), v.end(), b.begin());
std::sort
std::for_each
std::transform






