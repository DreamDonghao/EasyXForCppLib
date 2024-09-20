#include "EasyXForCpp.h"
#include <iostream>
int main() {
	efc::Message message;
	efc::Window window(1200, 800,249,249,247);// ´°¿Ú

	efc::Screen s1(window, message);
	efc::Rectangle r1(30, 10, 100, 780, 243, 236, 237, 243, 236, 237,25,25);
	efc::Rectangle r2(160, 400, 400, 150, 241, 200, 196, 241, 200, 196,25,25);
	efc::Rectangle r3(160, 570, 400, 150, 247, 225, 189, 247, 225, 189, 25, 25);
	efc::Rectangle r4(580, 400, 400, 150, 213,211,188, 213, 211, 188, 25, 25);
	efc::Rectangle r5(580, 570, 400, 150, 196, 237, 218, 196, 237, 218, 25, 25);
	s1.AddElement(&r1, &r2, &r3, &r4, &r5);
	while (true) {
		s1.upDate();
	}

	
	
	Sleep(100000);
	return 0;
}