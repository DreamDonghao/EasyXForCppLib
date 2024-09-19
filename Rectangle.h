#pragma once
#include"graphics.h"
namespace efc {
#pragma once
    // ������
    class Rectangle {
    public:
        // ���캯������ʼ�����ε�λ�á��ߴ硢�����ɫ�ͱ߿���ɫ
        Rectangle(int x = 0, int y = 0, unsigned width = 1, unsigned height = 1,
            int fillColorR = 255, int fillColorG = 255, int fillColorB = 255,
            int borderColorR = 0, int borderColorG = 0, int borderColorB = 0);
        // ��ȡ���ε�x����
        int getX() const { return x; }
        // ��ȡ���ε�y����
        int getY() const { return y; }
        // ��ȡ���εĿ��
        unsigned getWidth() const { return width; }
        // ��ȡ���εĸ߶�
        unsigned getHeight() const { return height; }
        // ���þ��ε�x����
        void setX(int _x) { x = _x; }
        // ���þ��ε�y����
        void setY(int _y) { y = _y; }
        // ���þ��εĿ��
        void setWidth(unsigned _width) { width = _width; }
        // ���þ��εĸ߶�
        void setHeight(unsigned _height) { height = _height; }
        // ��ȡ�����ɫ�ĺ�ɫ����
        int getFillColorR() const { return fillColorR; }
        // ��ȡ�����ɫ����ɫ����
        int getFillColorG() const { return fillColorG; }
        // ��ȡ�����ɫ����ɫ����
        int getFillColorB() const { return fillColorB; }
        // ��ȡ�߿���ɫ�ĺ�ɫ����
        int getBorderColorR() const { return borderColorR; }
        // ��ȡ�߿���ɫ����ɫ����
        int getBorderColorG() const { return borderColorG; }
        // ��ȡ�߿���ɫ����ɫ����
        int getBorderColorB() const { return borderColorB; }
        // ���������ɫ
        void setFillColor(int r, int g, int b);
        // ���ñ߿���ɫ
        void setBorderColor(int r, int g, int b);
    private:
        int x;                 // �������Ͻ�x����
        int y;                 // �������Ͻ�y����
        unsigned width;        // ���ο��
        unsigned height;       // ���θ߶�
        int fillColorR;        // �����ɫ��ɫ����
        int fillColorG;        // �����ɫ��ɫ����
        int fillColorB;        // �����ɫ��ɫ����
        int borderColorR;      // �߿���ɫ��ɫ����
        int borderColorG;      // �߿���ɫ��ɫ����
        int borderColorB;      // �߿���ɫ��ɫ����
    };
}