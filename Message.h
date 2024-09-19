#pragma once
#include "graphics.h"
namespace efc {
    // 处理输入事件类
    class Message {
    public:
        Message(); // 构造函数
        void flush(); // 刷新状态
        const bool isLeftMouseButtonDown() const; // 左键是否按下
        const bool isAKeyDown() const; // A键是否按下
        const bool isBKeyDown() const; // B键是否按下
        const bool isCKeyDown() const; // C键是否按下
        const bool isDKeyDown() const; // D键是否按下
        const bool isEKeyDown() const; // E键是否按下
        const bool isFKeyDown() const; // F键是否按下
        const bool isGKeyDown() const; // G键是否按下
        const bool isHKeyDown() const; // H键是否按下
        const bool isIKeyDown() const; // I键是否按下
        const bool isJKeyDown() const; // J键是否按下
        const bool isKKeyDown() const; // K键是否按下
        const bool isLKeyDown() const; // L键是否按下
        const bool isMKeyDown() const; // M键是否按下
        const bool isNKeyDown() const; // N键是否按下
        const bool isOKeyDown() const; // O键是否按下
        const bool isPKeyDown() const; // P键是否按下
        const bool isQKeyDown() const; // Q键是否按下
        const bool isRKeyDown() const; // R键是否按下
        const bool isSKeyDown() const; // S键是否按下
        const bool isTKeyDown() const; // T键是否按下
        const bool isUKeyDown() const; // U键是否按下
        const bool isVKeyDown() const; // V键是否按下
        const bool isWKeyDown() const; // W键是否按下
        const bool isXKeyDown() const; // X键是否按下
        const bool isYKeyDown() const; // Y键是否按下
        const bool isZKeyDown() const; // Z键是否按下
        const bool isSpaceKeyDown() const;// 判断空格是否按下
        const int getMouseX() const; // 获取鼠标X坐标
        const int getMouseY() const; // 获取鼠标Y坐标
    private:
        ExMessage message; // 消息结构体
        bool keyStates[256] = { false }; // 键状态数组
        int mouseX = 0; // 鼠标X坐标
        int mouseY = 0; // 鼠标Y坐标
    };
}