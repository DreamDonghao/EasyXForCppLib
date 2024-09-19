#pragma once
#include "Rectangle.h"

namespace efc {
    // 进度条类
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
        int x;  // X坐标
        int y;  // Y坐标
        unsigned int width; // 宽
        unsigned int height;// 高
        int r;  // 颜色分量R
        int g;  //颜色分量G
        int b;  //颜色分量B
        double maxVal; //对应的最大值
        double nowVal; //对应的当前值
    };
}