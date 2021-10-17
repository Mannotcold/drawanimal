#include "DrawAnimal.h"


void fixConsoleWindow()
{
	HWND consoleWindow = GetConsoleWindow();
	LONG style = GetWindowLong(consoleWindow, GWL_STYLE);
	style = style & ~(WS_MAXIMIZEBOX) & ~(WS_THICKFRAME);
	SetWindowLong(consoleWindow, GWL_STYLE, style);
}


void gotoXY(int x, int y)
{
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}


void textcolor(int x) {
	HANDLE  h = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleTextAttribute(h, x);
}


void SetWindowSize(SHORT width, SHORT height) {
	RECT rect;
	HWND console = GetConsoleWindow();
	GetWindowRect(console, &rect);
	MoveWindow(console, rect.left, rect.top, width, height, TRUE);
}



void ShowCur(bool CursorVisibility)
{
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cursor = { 1, CursorVisibility };
	SetConsoleCursorInfo(handle, &cursor);
}


void drawdino1(int x, int y)
{
	gotoXY(x, y);
	cout << "             " << char(244) << char(242) << "`]";

	gotoXY(x, y + 1);
	cout << "'. ___.----'` /'";

	gotoXY(x, y + 2);
	cout << "  ' -.._.   )/";

	gotoXY(x, y + 3);
	cout << "         " << char(200) <<" "<< char(200);
}
void drawdino2(int x, int y) 
{
	gotoXY(x, y);
	cout << " [`" << char(243) << "]";

	gotoXY(x, y + 1);
	cout << "  '\\ `'----.__ .'";

	gotoXY(x, y + 2);
	cout << "    \\(   ._..-'";

	gotoXY(x, y + 3);
	cout << "       " << char(188) << " " << char(188);
}


void drawbear1(int x, int y) {

	gotoXY(x, y);
	cout << " (')_(')_.--.,/) ";

	gotoXY(x, y + 1);
	cout << " ;_ _ ';-._, ')_";

	gotoXY(x, y + 2);
	cout << "(o_, )'___,)'-,_)";


}

void drawbear2(int x, int y) {


	gotoXY(x, y);
	cout << " (\\, .--._(')_(') ";

	gotoXY(x, y + 1);
	cout << " _('  ,_.-;' _ _;";

	gotoXY(x, y + 2);
	cout << "(_, .'(,___'(, _o)";


}

void drawrabbitthin1(int x, int y) {

	gotoXY(x, y);
	cout << "  (\\_/)  ";

	gotoXY(x, y + 1);
	cout << "  ('~')";

	gotoXY(x, y + 2);
	cout << " o/" << char(248) << char(248) << "/";

	gotoXY(x, y + 3);
	cout << "  o o";
}

void drawrabbitthin2(int x, int y) {

	gotoXY(x, y);
	cout << " (\\_/)";

	gotoXY(x, y + 1);
	cout << " ('~') ";

	gotoXY(x, y + 2);
	cout << "  \\" << char(248) << char(248) << "\\o";

	gotoXY(x, y + 3);
	cout << "   o o";
}


void drawrabitfat1(int x, int y) {

	gotoXY(x, y);
	cout << " (\\_(\\";

	gotoXY(x, y + 1);
	cout << " (=' :') ";

	gotoXY(x, y + 2);
	cout << " (,(')(')";

}

void drawrabitfat2(int x, int y) {

	gotoXY(x, y);
	cout << "  /)_/)";

	gotoXY(x, y + 1);
	cout << " (': '=) ";

	gotoXY(x, y + 2);
	cout << "(')('),)";
}