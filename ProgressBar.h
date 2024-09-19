#pragma once
#include "Rectangle.h"

namespace efc {
    // ��������
    class ProgressBar {
    public:
        ProgressBar(const int _x, const int _y, const int _width, const int _height,
            const int r, const int g, const int b,
            const double _maxVal, const double _nowVal);
        void upDateNowVal(const double _nowVal) { nowVal = _nowVal; }
        int getX() const { return x; }
        int getY() const { return y; }
        unsigned int getWidth() const { return width; }
        unsigned int getHeigth() const { return height; }
        int getR() const { return r; }
        int getG() const { return g; }
        int getB() const { return b; }
        double getMaxVal() const { return maxVal; }
        double getNowVal() const { return nowVal; }
        double getNowWidth()const;
    private:
        int x;  // X����
        int y;  // Y����
        unsigned int width; // ��
        unsigned int height;// ��
        int r;  // ��ɫ����R
        int g;  //��ɫ����G
        int b;  //��ɫ����B
        double maxVal; //��Ӧ�����ֵ
        double nowVal; //��Ӧ�ĵ�ǰֵ
    };
}