#include <iostream>
using namespace std;

int main() {
	short a = 0b100110;
	short b = 0b101101;
	//    a^b=0b001011
	cout << (a ^ b) << endl;
	cout << "------" << endl;

	//1.标记位取反
	short c = 0b1010111;
	//        0b0010000
	//        0b1000111;
	cout << (c ^ 0b0010000) << endl;
	cout << "------" << endl;

	//2.变量交换
	short d = 78;
	short e = 89;
	d = d ^ e;
	e = d ^ e;//d^e^e=d
	d = d ^ e;//d^e^d=e
	cout << d << "  " << e << endl;
	cout << "-------" << endl;

	//4.加密
	short v = 1314;
	short y = 1314^999;
	cout << y << endl;
	cout << (y ^ 999) << endl;
		return 0;
}
