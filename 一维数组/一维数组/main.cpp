#include <iostream>
using namespace std;

int main() {
	//�������� ������[��������]
	int a[90];
	double b[80];
	char c[88];
	int x1[10], x2[20], x4, x3, x5[40];

	//�������
	short d;
	short e[9];
	cin >> d;
	for (int i = 0; i < d; ++i) {
		cin >> e[i];
	}

	for (int i = d - 1; i >= 0; --i) {
		cout << e[i] << "";
	}
	cout << endl;

	return 0;
}

