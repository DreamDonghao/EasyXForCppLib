#include "Screen.h"

namespace efc {
    // 构造函数，初始化窗口对象的引用
    Screen::Screen(Window& _window, Message& _message) : window(_window),message(_message) {}

    

    // 更新屏幕，绘制所有元素
    void Screen::upDate() {
        window.clear(); // 清除窗口内容
        // 绘制所有按钮
        for (auto& button : buttons) {
            window.drawToBuffer(*button);
        }
        // 绘制所有图标
        for (auto& imageIcon : imageIcons) {
            window.drawToBuffer(*imageIcon);
        }
        // 绘制所有进度条
        for (auto& progressBar : progressBars) {
            window.drawToBuffer(*progressBar);
        }
        // 绘制所有矩形
        for (auto& rectangle : rectangles) {
            window.drawToBuffer(*rectangle);
        }
        window.flushBuffer(); // 刷新缓冲区显示内容

        message.flush();
    }

}