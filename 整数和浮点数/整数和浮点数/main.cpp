#include <iostream>
//精度
#include <iomanip>
//绝对值
#include <cmath>
using namespace std;

#define x (1e-5)
int main() {
	short a = 10; int b = 9; long c = 8; long long d = 5;
	float f = 3.1415926; double dou = 3.1415926;
	cout << setprecision(99) << dou << endl;

	//注意1要写成1.0，否则qi的结果为0。下面示例作用为：高位运算有误差
	double qi = 1.0 / 3725778677 * 3725778677;
	cout << qi << endl;

	if (fabs(qi -1)<x) {
		cout << 666;
	}
	return 0;
}