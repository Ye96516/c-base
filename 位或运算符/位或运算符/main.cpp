#include <iostream>
using namespace std;

int main() {
	short a = 0b1010011;
	short b = 0b0110101;
	//     |= 0b1110111
	cout << (a | b) << endl;
	cout << "------" << endl;

	//1.���ñ��λ
	short c = 0b101001;
	//�뽫�ڶ�λ��0���1.
	cout << (c | 0b000010) << endl;
	cout << "------" << endl;

	//2.�ÿձ��λ��
	short d = 0b000001;
	//�����һλ�ÿ�
	cout << (d | c) - d << endl;
	cout << "------" << endl;

	//3.��λ����0���1.
	short e = 0b1010101000;
	//   e-1= 0b1010100111
	//  ������0b1010101111
	cout << (e | e - 1) << endl;
	cout << "------" << endl;

	return 0;
}