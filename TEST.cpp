#include "EasyXForCpp.h"
#include <iostream>
int main() {
	efc::Message message;
	efc::Window window(800, 600,225,225,225);// ����

	efc::Rectangle r(0, 0, 100, 100, 100, 100, 100); //����
	efc::ImageIcon i(L"C:\\Users\\Donghao\\Pictures\\a\\m.png", 100, 100, 100, 100);// ͼƬ
	efc::Button b(message, L"C:\\Users\\Donghao\\Pictures\\a\\m.png", 300, 300, 300, 300);//��ť
	efc::ProgressBar p(0, 0, 800, 100, 200, 50, 50, 100, 0);
	efc::Button startGame(message, L" ", 400, 100, 400, 150);
	efc::Button settings(message, L"", 400, 300, 400, 150);
	efc::Button exit(message, L"", 400, 500, 400, 150);
	efc::Screen screen(window,message);     
	screen.AddElement(&startGame,&exit,&settings);
	screen.AddElement(&startGame, &exit, &settings);

	
	efc::Timer timer;
	timer.reset();
	for (int i = 0; i <= 100; ++i) {
		p.upDateNowVal(i);
		screen.upDate();
	}
	std::cout << timer.elapsedMilliseconds();
	std::cout << "����";
	Sleep(100000);
	return 0;
}