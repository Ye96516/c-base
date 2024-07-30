#include <iostream>
using namespace std;

int main() {
	short a = 0b1;
	short b = 0b1111111111111110;

	cout << b << endl;
	cout << (~a) << endl;

	return 0;
}