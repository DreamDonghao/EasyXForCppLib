#include "Message.h"

namespace efc {
    // 构造函数，初始化键状态和鼠标位置
    Message::Message() {
        mouseX = 0;
        mouseY = 0;
    }

    // 刷新状态
    void Message::flush() {
        while (peekmessage(&message)) {
            if (message.message == WM_KEYDOWN) {
                keyStates[message.vkcode] = true;
            } else if (message.message == WM_KEYUP) {
                keyStates[message.vkcode] = false;
            } else if (message.message == WM_LBUTTONDOWN) {
                // 处理左键按下事件
            } else if (message.message == WM_MOUSEMOVE) {
                mouseX = message.x;
                mouseY = message.y;
            }
        }
    }

    // 左键是否按下
    const bool Message::isLeftMouseButtonDown() const {
        return (GetAsyncKeyState(VK_LBUTTON) & 0x8000) != 0;
    }

    // 各个键是否按下
    const bool Message::isAKeyDown() const { return keyStates['A']; }
    const bool Message::isBKeyDown() const { return keyStates['B']; }
    const bool Message::isCKeyDown() const { return keyStates['C']; }
    const bool Message::isDKeyDown() const { return keyStates['D']; }
    const bool Message::isEKeyDown() const { return keyStates['E']; }
    const bool Message::isFKeyDown() const { return keyStates['F']; }
    const bool Message::isGKeyDown() const { return keyStates['G']; }
    const bool Message::isHKeyDown() const { return keyStates['H']; }
    const bool Message::isIKeyDown() const { return keyStates['I']; }
    const bool Message::isJKeyDown() const { return keyStates['J']; }
    const bool Message::isKKeyDown() const { return keyStates['K']; }
    const bool Message::isLKeyDown() const { return keyStates['L']; }
    const bool Message::isMKeyDown() const { return keyStates['M']; }
    const bool Message::isNKeyDown() const { return keyStates['N']; }
    const bool Message::isOKeyDown() const { return keyStates['O']; }
    const bool Message::isPKeyDown() const { return keyStates['P']; }
    const bool Message::isQKeyDown() const { return keyStates['Q']; }
    const bool Message::isRKeyDown() const { return keyStates['R']; }
    const bool Message::isSKeyDown() const { return keyStates['S']; }
    const bool Message::isTKeyDown() const { return keyStates['T']; }
    const bool Message::isUKeyDown() const { return keyStates['U']; }
    const bool Message::isVKeyDown() const { return keyStates['V']; }
    const bool Message::isWKeyDown() const { return keyStates['W']; }
    const bool Message::isXKeyDown() const { return keyStates['X']; }
    const bool Message::isYKeyDown() const { return keyStates['Y']; }
    const bool Message::isZKeyDown() const { return keyStates['Z']; }

    const bool Message::isSpaceKeyDown() const {
        return keyStates[VK_SPACE];
    }

    

    // 获取鼠标坐标
    const int Message::getMouseX() const { return mouseX; }
    const int Message::getMouseY() const { return mouseY; }
}
