#include <iostream>
using namespace std;

//   a=a*2^n
int main() {
    //��������
	int a = 2;
	cout << (a << 2) << endl;
	cout << "-----" << endl;
	
	//��������
	int g = -2;
	cout <<"��������: " << (g << 2) << endl;
	cout << "-----" << endl;

	//���Ƹ���λ
	int b = 2;
	cout << (b << (-1)) << endl;  //����������������Ϊ��
	cout << "-----" << endl;

	//����С��λ,����ʵ�鲻������С��λ
	int c=2;
	float d = 1.6;
	//cout << (c << d) << endl;  
	cout << (7 / 3);
	cout << "-----" << endl;

	//�������
	int e = 4;
	cout << (e <<29) << endl;
	cout << sizeof(int)<<endl;
	int f = 1;
	cout << (f << 31);

	//0b1...0000000000000000 ����������Ϊ��


	return 0;
}

