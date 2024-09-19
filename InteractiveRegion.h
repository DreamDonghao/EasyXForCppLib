#pragma once
#include "Message.h"
namespace efc {
    // 可交互区域类
    class InteractiveRegion {
    public:
        // 构造函数，初始化区域位置、大小和消息对象引用
        InteractiveRegion(const int _x, const int _y,
            const int _width, const int _height, Message& message);
        // 判断左键是否在区域内点击
        const bool isLeftMouseButtonClick();
    private:
        int x;          // 区域左上角X坐标
        int y;          // 区域左上角Y坐标
        int width;      // 区域宽度
        int height;     // 区域高度
        Message& message; // 消息对象引用
    };
}