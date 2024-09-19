#pragma once
#include "graphics.h"
namespace efc {
    // ���������¼���
    class Message {
    public:
        Message(); // ���캯��
        void flush(); // ˢ��״̬
        const bool isLeftMouseButtonDown() const; // ����Ƿ���
        const bool isAKeyDown() const; // A���Ƿ���
        const bool isBKeyDown() const; // B���Ƿ���
        const bool isCKeyDown() const; // C���Ƿ���
        const bool isDKeyDown() const; // D���Ƿ���
        const bool isEKeyDown() const; // E���Ƿ���
        const bool isFKeyDown() const; // F���Ƿ���
        const bool isGKeyDown() const; // G���Ƿ���
        const bool isHKeyDown() const; // H���Ƿ���
        const bool isIKeyDown() const; // I���Ƿ���
        const bool isJKeyDown() const; // J���Ƿ���
        const bool isKKeyDown() const; // K���Ƿ���
        const bool isLKeyDown() const; // L���Ƿ���
        const bool isMKeyDown() const; // M���Ƿ���
        const bool isNKeyDown() const; // N���Ƿ���
        const bool isOKeyDown() const; // O���Ƿ���
        const bool isPKeyDown() const; // P���Ƿ���
        const bool isQKeyDown() const; // Q���Ƿ���
        const bool isRKeyDown() const; // R���Ƿ���
        const bool isSKeyDown() const; // S���Ƿ���
        const bool isTKeyDown() const; // T���Ƿ���
        const bool isUKeyDown() const; // U���Ƿ���
        const bool isVKeyDown() const; // V���Ƿ���
        const bool isWKeyDown() const; // W���Ƿ���
        const bool isXKeyDown() const; // X���Ƿ���
        const bool isYKeyDown() const; // Y���Ƿ���
        const bool isZKeyDown() const; // Z���Ƿ���
        const bool isSpaceKeyDown() const;// �жϿո��Ƿ���
        const int getMouseX() const; // ��ȡ���X����
        const int getMouseY() const; // ��ȡ���Y����
    private:
        ExMessage message; // ��Ϣ�ṹ��
        bool keyStates[256] = { false }; // ��״̬����
        int mouseX = 0; // ���X����
        int mouseY = 0; // ���Y����
    };
}