#pragma once
#include "Button.h"
#include "Image.h"
#include "ImageIcon.h"
#include "ProgressBar.h"
#include "Rectangle.h"
#include <graphics.h>
namespace efc {
	// ������
	class Window {
	public:
		// ���캯������ʼ�����ڵĿ�� �߶� ������ɫ
		Window(unsigned _width, unsigned _height,const int r = 0,const int g = 0,const int b = 0);
		// ���ñ�����ɫ��ʹ�� RGB ֵ
		void setBackgroundColor(const int r, const int g, const int b) {setbkcolor(RGB(r, g, b));}

		// ��ȡ���ڵĿ��
		const unsigned getWidth() const { return width; }
		// ��ȡ���ڵĸ߶�
		const unsigned getHeight() const { return height; }

		// ˢ�»����������´�����ʾ����
		void flushBuffer() { FlushBatchDraw(); }
		// ��մ���
		void clear() { cleardevice(); }
		// ��������ػ��Ƶ�������
		template<typename... Args>
		void drawToBuffer(Args... args) {
			(drawObjectToBuffer(args), ...);
		}

	private:
		unsigned width;  // ���ڵĿ��
		unsigned height; // ���ڵĸ߶�

		// ��ͼ����Ƶ�������
		void drawObjectToBuffer(const ImageIcon& imageIcon);
		// ����ť���Ƶ�������
		void drawObjectToBuffer(const Button& button);
		// �����λ��Ƶ�������
		void drawObjectToBuffer(const Rectangle& rectangle);
		// �����������Ƶ�������
		void drawObjectToBuffer(ProgressBar& progressBar);
	};
}