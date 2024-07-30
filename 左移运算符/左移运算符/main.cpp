#include <iostream>
using namespace std;

//   a=a*2^n
int main() {
    //正数左移
	int a = 2;
	cout << (a << 2) << endl;
	cout << "-----" << endl;
	
	//负数左移
	int g = -2;
	cout <<"负数左移: " << (g << 2) << endl;
	cout << "-----" << endl;

	//左移负数位
	int b = 2;
	cout << (b << (-1)) << endl;  //导致算数溢出，结果为零
	cout << "-----" << endl;

	//左移小数位,经过实验不可左移小数位
	int c=2;
	float d = 1.6;
	//cout << (c << d) << endl;  
	cout << (7 / 3);
	cout << "-----" << endl;

	//左移溢出
	int e = 4;
	cout << (e <<29) << endl;
	cout << sizeof(int)<<endl;
	int f = 1;
	cout << (f << 31);

	//0b1...0000000000000000 所以溢出结果为零


	return 0;
}

