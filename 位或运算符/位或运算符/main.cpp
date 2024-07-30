#include <iostream>
using namespace std;

int main() {
	short a = 0b1010011;
	short b = 0b0110101;
	//     |= 0b1110111
	cout << (a | b) << endl;
	cout << "------" << endl;

	//1.设置标记位
	short c = 0b101001;
	//想将第二位的0变成1.
	cout << (c | 0b000010) << endl;
	cout << "------" << endl;

	//2.置空标记位。
	short d = 0b000001;
	//将最后一位置空
	cout << (d | c) - d << endl;
	cout << "------" << endl;

	//3.低位连续0变成1.
	short e = 0b1010101000;
	//   e-1= 0b1010100111
	//  ——》0b1010101111
	cout << (e | e - 1) << endl;
	cout << "------" << endl;

	return 0;
}