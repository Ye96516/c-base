#include <iostream>
using namespace std;

int main() {
	int a = 1;
	int b=	a++;//�Ȱ�ֵ����a����ִ�е���
	int c = ++a;//��ִ�е������ٰ�ֵ��y(Ч����΢��һ��)
		cout << "a���ڣ�" << a << endl;
		cout << "b���ڣ�" << b << endl;
		cout << "c���ڣ�" << c << endl;
		cout << "-------" << endl;
	int d = 1;
	int e = d--;
	int f = --d;
		cout << "d���ڣ�" << d << endl;
		cout << "e���ڣ�" << e << endl;
		cout << "f���ڣ�" << f << endl;
	return 0;
}