#include <iostream>
using namespace std;

int main() {
	int a = 0b10111;
	int b = 0b00010;
	// ���=0b00010
	cout << (a & b) << endl;
	cout << "---------" << endl;

	//1.�ж�c����ż�ԡ�
	short c = 5;
	cout << 4 % 2 << endl;
	cout << (c & 1) << endl;
	cout << "---------" << endl;
	//0b101��5
	//0b001,1
	//λ�������Ϊ1����������Ϊ����Ϊż�� 

	//2.���һ������������ĩ5λ��
	short d = 0b1001110111011;
	short e = 0b11111;
	//���Ϊ0b11011
	cout << (d & e) << endl;
	cout << "---------" << endl;

	//3.��һ��������ĩ��λ���㡣
	short f = 0b100100110101011;
	short g = 0b00000;

	//4.����ĩβ������1.
	short a4 = 0b1001011111;
	//    a4+1=0b1001100000;
	cout << (a4 + 1 & a4) << endl;
	cout << "---------" << endl;
	
	
	//5.�������ж���
	short c5 = 0b01000;
	//    c5-1=0b00100
	cout << (c5 - 1 & c5) << endl;
	if ((c5 > 0) && ((c5 - 1 & c5) == 0)) {
		cout << "ż��" << endl;
	}
	return 0;
}