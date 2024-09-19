#pragma once
#include "Message.h"
namespace efc {
    // �ɽ���������
    class InteractiveRegion {
    public:
        // ���캯������ʼ������λ�á���С����Ϣ��������
        InteractiveRegion(const int _x, const int _y,
            const int _width, const int _height, Message& message);
        // �ж�����Ƿ��������ڵ��
        const bool isLeftMouseButtonClick();
    private:
        int x;          // �������Ͻ�X����
        int y;          // �������Ͻ�Y����
        int width;      // ������
        int height;     // ����߶�
        Message& message; // ��Ϣ��������
    };
}