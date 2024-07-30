#include <iostream>
using namespace std;

int main() {
	int a[5][4];
	
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 4; ++j) {
			a[i][j] = i * j;
		}
	}

	int b[4][4] = {
		{1},
	{ 1, 2, 3 },
	{ 3 },
	};
	for (int i = 0; i < 4; ++i) {
		for (int j = 0; j < 4; ++j) {
			cout << b[i][j];
			
		}
		cout << endl;
		
	}

	
	return 0;
}