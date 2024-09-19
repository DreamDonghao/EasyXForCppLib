#include "Screen.h"

namespace efc {
    // ���캯������ʼ�����ڶ��������
    Screen::Screen(Window& _window, Message& _message) : window(_window),message(_message) {}

    

    // ������Ļ����������Ԫ��
    void Screen::upDate() {
        window.clear(); // �����������
        // �������а�ť
        for (auto& button : buttons) {
            window.drawToBuffer(*button);
        }
        // ��������ͼ��
        for (auto& imageIcon : imageIcons) {
            window.drawToBuffer(*imageIcon);
        }
        // �������н�����
        for (auto& progressBar : progressBars) {
            window.drawToBuffer(*progressBar);
        }
        // �������о���
        for (auto& rectangle : rectangles) {
            window.drawToBuffer(*rectangle);
        }
        window.flushBuffer(); // ˢ�»�������ʾ����

        message.flush();
    }

}