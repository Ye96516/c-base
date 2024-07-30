#include <iostream>
#include <Windows.h>
using namespace std;

#define Y 27
#define X 60
void hide_cursor() {
	
		HANDLE hOutput = GetStdHandle(STD_OUTPUT_HANDLE);
		
		CONSOLE_CURSOR_INFO curInfo = { 1,FALSE };
		
		SetConsoleCursorInfo( hOutput, & curInfo);

}
void draw_map(){
	system("cls");
	cout << "©³";
	for (short i = 0; i < X; ++i) {
		cout << "©¥" ;
	}
	cout << "©·"<<endl;
	for (short i = 0; i < Y; ++i) {
		cout << "©§" ;
		for (short i = 0; i < X; ++i) {
			cout << " ";
		}
		cout << "©§" << endl;
	}
	cout << "©»";
	for (short i = 0; i < X; ++i) {
		cout << "©¥";
	}
	cout << "©¿";
}
int main() {
	draw_map();
	while (1) {
		
	}

	return 0;
}