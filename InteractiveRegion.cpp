#include "InteractiveRegion.h"

namespace efc {
    // ���캯������ʼ�������λ�á���С����Ϣ����
    InteractiveRegion::InteractiveRegion(const int _x, const int _y,
        const int _width, const int _height, Message& _message)
        : x(_x), y(_y), width(_width), height(_height), message(_message) {
        // ��������ʼ������
    }

    // �ж�����Ƿ��������ڵ��
    const bool InteractiveRegion::isLeftMouseButtonClick() {
        // ��ȡ��ǰ����X��Y����
        int mouseX = message.getMouseX();
        int mouseY = message.getMouseY();

        // �������Ƿ��£��������λ���Ƿ���ָ��������
        if (message.isLeftMouseButtonDown() &&
            mouseX >= x && mouseX <= x + width &&
            mouseY >= y && mouseY <= y + height) {
            return true;  // �������������ڵ��������true
        } else {
            return false; // ���򷵻�false
        }
    }
}
