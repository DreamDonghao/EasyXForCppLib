#include "Button.h"

namespace efc {

    // ���캯������ʼ����ť��ͼ��ͽ�������
    Button::Button(Message& message, const std::wstring& imagePath,
        const int x, const int y, const unsigned width, const unsigned height)
        : imageIcon(imagePath, x, y, width, height), // ��ʼ��ͼ��ͼ��
        interactiveRegin(x, y, width, height, message) { // ��ʼ����������
    }

    // ����Ƿ�������
    const bool Button::isLeftClick() {
        return interactiveRegin.isLeftMouseButtonClick(); // �ж��Ƿ���
    }
}
