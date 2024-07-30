#include <iostream>
using namespace std;

int main() {
	int a = 1;
	a = 4, 2, 3;
	//实际上是（a = 4）,（ 2）, （3）
	//已经将4赋给了a，所以输出4
	cout << a << endl;

	int b = 2;
	b = (3, 4, 5);
	//逗号运算符将最后一个值赋给变量
	cout << b << endl;
	return 0;
}