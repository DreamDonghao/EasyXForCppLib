#include "Button.h"

namespace efc {

    // 构造函数：初始化按钮的图像和交互区域
    Button::Button(Message& message, const std::wstring& imagePath,
        const int x, const int y, const unsigned width, const unsigned height)
        : imageIcon(imagePath, x, y, width, height), // 初始化图像图标
        interactiveRegin(x, y, width, height, message) { // 初始化交互区域
    }

    // 检查是否左键点击
    const bool Button::isLeftClick() {
        return interactiveRegin.isLeftMouseButtonClick(); // 判断是否点击
    }
}
