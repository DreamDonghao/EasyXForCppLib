#include "InteractiveRegion.h"

namespace efc {
    // 构造函数，初始化区域的位置、大小和消息对象
    InteractiveRegion::InteractiveRegion(const int _x, const int _y,
        const int _width, const int _height, Message& _message)
        : x(_x), y(_y), width(_width), height(_height), message(_message) {
        // 无需额外初始化代码
    }

    // 判断左键是否在区域内点击
    const bool InteractiveRegion::isLeftMouseButtonClick() {
        // 获取当前鼠标的X和Y坐标
        int mouseX = message.getMouseX();
        int mouseY = message.getMouseY();

        // 检查左键是否按下，并且鼠标位置是否在指定区域内
        if (message.isLeftMouseButtonDown() &&
            mouseX >= x && mouseX <= x + width &&
            mouseY >= y && mouseY <= y + height) {
            return true;  // 如果左键在区域内点击，返回true
        } else {
            return false; // 否则返回false
        }
    }
}
