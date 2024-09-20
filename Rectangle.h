#pragma once
#include "graphics.h"

namespace efc {
    // 矩形类
    class Rectangle {
    public:
        // 构造函数：初始化矩形的位置、尺寸、填充颜色和边框颜色
        Rectangle(int x = 0, int y = 0, unsigned width = 1, unsigned height = 1,
            int fillColorR = 255, int fillColorG = 255, int fillColorB = 255,
            int borderColorR = 0, int borderColorG = 0, int borderColorB = 0,
            int ellipsewidth = 0, int ellipseheight = 0);

        // 获取矩形的x坐标
        int getX() const { return x; }
        // 获取矩形的y坐标
        int getY() const { return y; }
        // 获取矩形的宽度
        unsigned getWidth() const { return width; }
        // 获取矩形的高度
        unsigned getHeight() const { return height; }
        // 设置矩形的x坐标
        void setX(int _x) { x = _x; }
        // 设置矩形的y坐标
        void setY(int _y) { y = _y; }
        // 设置矩形的宽度
        void setWidth(unsigned _width) { width = _width; }
        // 设置矩形的高度
        void setHeight(unsigned _height) { height = _height; }

        int getEllipsewidth() const { return ellipsewidth; }
        int getEllipseheight() const { return ellipseheight; }

        // 获取填充颜色的红色分量
        int getFillColorR() const { return fillColorR; }
        // 获取填充颜色的绿色分量
        int getFillColorG() const { return fillColorG; }
        // 获取填充颜色的蓝色分量
        int getFillColorB() const { return fillColorB; }
        // 获取边框颜色的红色分量
        int getBorderColorR() const { return borderColorR; }
        // 获取边框颜色的绿色分量
        int getBorderColorG() const { return borderColorG; }
        // 获取边框颜色的蓝色分量
        int getBorderColorB() const { return borderColorB; }
        // 设置填充颜色
        void setFillColor(int r, int g, int b);
        // 设置边框颜色
        void setBorderColor(int r, int g, int b);
    private:
        int x;                  // 矩形左上角x坐标
        int y;                 // 矩形左上角y坐标
        unsigned width;        // 矩形宽度
        unsigned height;       // 矩形高度
        int ellipsewidth;      // 构成圆角矩形的圆角的椭圆的宽度
        int ellipseheight;     // 构成圆角矩形的圆角的椭圆的高度
        int fillColorR;        // 填充颜色红色分量
        int fillColorG;        // 填充颜色绿色分量
        int fillColorB;        // 填充颜色蓝色分量
        int borderColorR;      // 边框颜色红色分量
        int borderColorG;      // 边框颜色绿色分量
        int borderColorB;      // 边框颜色蓝色分量
    };
}