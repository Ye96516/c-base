#include <iostream>
using namespace std;

int main() {
	int a = 1;
	a = 4, 2, 3;
	//ʵ�����ǣ�a = 4��,�� 2��, ��3��
	//�Ѿ���4������a���������4
	cout << a << endl;

	int b = 2;
	b = (3, 4, 5);
	//��������������һ��ֵ��������
	cout << b << endl;
	return 0;
}