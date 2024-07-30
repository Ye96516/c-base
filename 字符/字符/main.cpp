/*
字符仅能放下一个字母,
字符在ASCII码里有字母一一对应，
(int)a类型转换写法
*/
#include <iostream>
using namespace std;

int main() {
	char a = 'y';
	char b = 'x';
	char c = 'a';

	c = 88;
	cout << c << endl;
	cout << b - a<< endl;
	cout << a << endl;
	cout << b<< endl;
	cout << (int)a;
		

	return 0;
}