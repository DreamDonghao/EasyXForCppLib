#pragma once
#include "ImageIcon.h"
#include "InteractiveRegion.h"

namespace efc {
    //��ť��
    class Button {
    public:
        // ���캯������ʼ����ťͼ��ͽ�������
        Button(Message& message, const std::wstring& imagePath = L"",
            const int x = 0, const int y = 0,
            const unsigned width = 0, const unsigned height = 0);
        // ��ȡ��ť��ͼ����Դ
        const ImageIcon& getImageIcon()const { return imageIcon; }
        // ����Ƿ�������
        const bool isLeftClick();
    private:
        ImageIcon imageIcon;         // ͼ��ͼ��
        InteractiveRegion interactiveRegin; // ��������
    };
}