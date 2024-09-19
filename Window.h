#pragma once
#include "Button.h"
#include "Image.h"
#include "ImageIcon.h"
#include "ProgressBar.h"
#include "Rectangle.h"
#include <graphics.h>
namespace efc {
	// 窗口类
	class Window {
	public:
		// 构造函数，初始化窗口的宽度 高度 背景颜色
		Window(unsigned _width, unsigned _height,const int r = 0,const int g = 0,const int b = 0);
		// 设置背景颜色，使用 RGB 值
		void setBackgroundColor(const int r, const int g, const int b) {setbkcolor(RGB(r, g, b));}

		// 获取窗口的宽度
		const unsigned getWidth() const { return width; }
		// 获取窗口的高度
		const unsigned getHeight() const { return height; }

		// 刷新缓冲区，更新窗口显示内容
		void flushBuffer() { FlushBatchDraw(); }
		// 清空窗口
		void clear() { cleardevice(); }
		// 将对象加载绘制到缓冲区
		template<typename... Args>
		void drawToBuffer(Args... args) {
			(drawObjectToBuffer(args), ...);
		}

	private:
		unsigned width;  // 窗口的宽度
		unsigned height; // 窗口的高度

		// 将图标绘制到缓冲区
		void drawObjectToBuffer(const ImageIcon& imageIcon);
		// 将按钮绘制到缓冲区
		void drawObjectToBuffer(const Button& button);
		// 将矩形绘制到缓冲区
		void drawObjectToBuffer(const Rectangle& rectangle);
		// 将进度条绘制到缓冲区
		void drawObjectToBuffer(ProgressBar& progressBar);
	};
}