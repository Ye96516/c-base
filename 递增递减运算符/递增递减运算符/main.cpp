#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b=	a++;//先把值给到a，再执行递增
	int c = ++a;//先执行递增，再把值给y(效率稍微高一点)
		cout << "a等于：" << a << endl;
		cout << "b等于：" << b << endl;
		cout << "c等于：" << c << endl;
		cout << "-------" << endl;
	int d = 1;
	int e = d--;
	int f = --d;
		cout << "d等于：" << d << endl;
		cout << "e等于：" << e << endl;
		cout << "f等于：" << f << endl;
	return 0;
}