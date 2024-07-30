#include <iostream>
#include<string>
using namespace std;

int main() {
	char a[] = "hhhh";
	string b = "ppp";
	cout << a << endl << b + "l";
	cout << sizeof("hhhh");

	return 0;
}

/*
两种方法都可以打印字符串，
但是第一种方法不可以再接字符串，
第二种方法需要引入头文件string
*/