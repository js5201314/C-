#include<iostream>
using namespace std;
int main01()
{
	//C语言中的实现
	//*(a < b ? &a : &b)= 30;
	int a = 10;
	int b = 20;
	(a < b ? a : b) = 30;
	cout << "a= " << a << endl;
	cout << "b = " << b << endl;
	system("pause");
	return 0;
}

