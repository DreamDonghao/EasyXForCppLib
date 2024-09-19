#pragma once
#include "ImageIcon.h"
#include "InteractiveRegion.h"

namespace efc {
    //按钮类
    class Button {
    public:
        // 构造函数：初始化按钮图像和交互区域
        Button(Message& message, const std::wstring& imagePath = L"",
            const int x = 0, const int y = 0,
            const unsigned width = 0, const unsigned height = 0);
        // 获取按钮的图像资源
        const ImageIcon& getImageIcon()const { return imageIcon; }
        // 检查是否左键点击
        const bool isLeftClick();
    private:
        ImageIcon imageIcon;         // 图像图标
        InteractiveRegion interactiveRegin; // 交互区域
    };
}