#include<iostream>
using namespace std;
//const分配内存的时机，编译器编译期间
int main()
{
	int a;
	const int b = 10;
	int c;
	printf("&a: %d, &b: %d, &c: %d", &a, &b, &c);
	system("pause");
	return 0;
}

