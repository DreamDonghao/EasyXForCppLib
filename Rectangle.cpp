#include "Rectangle.h"

namespace efc {
    // 构造函数的实现
    Rectangle::Rectangle(int x, int y, unsigned width, unsigned height,
        int fillColorR, int fillColorG, int fillColorB,
        int borderColorR, int borderColorG, int borderColorB, 
        int ellipsewidth,int ellipseheight)
        : x(x), y(y), width(width), height(height),
        fillColorR(fillColorR), fillColorG(fillColorG), fillColorB(fillColorB),
        borderColorR(borderColorR), borderColorG(borderColorG), borderColorB(borderColorB),
        ellipseheight(ellipseheight),ellipsewidth(ellipsewidth) {
    }

    void Rectangle::setFillColor(int r, int g, int b) {
        fillColorR = r;
        fillColorG = g;
        fillColorB = b;
    }

    void Rectangle::setBorderColor(int r, int g, int b) {
        borderColorR = r;
        borderColorG = g;
        borderColorB = b;
    }

}