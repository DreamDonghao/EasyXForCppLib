#pragma once
#include <string>
#include "graphics.h"

namespace efc {
    //图像资源类（包含图像在窗口的位置）
    class ImageIcon {
    public:
        // 构造函数
        ImageIcon(const std::wstring& _filepath = L"",
            int _x = 0, int _y = 0,
            unsigned _width = 0, unsigned _height = 0); 
        // 获取图像宽度
        int getWidth() const;
        // 获取图像高度
        int getHeight() const;  
        // 获取图像左上角X坐标
        int getX() const;     
        // 获取图像左上角Y坐标
        int getY() const;      
        // 获取图像
        const IMAGE& getImage() const; 
        // 设置并加载图像
        void setImage(const std::wstring& _filepath);
        void setWidth(unsigned _width);               // 设置宽度
        void setHeight(unsigned _height);             // 设置高度
        void setX(int _x);                           // 设置X坐标
        void setY(int _y);                           // 设置Y坐标

    private:
        IMAGE image;             // 图像对象
        std::wstring filepath;   // 图像路径
        unsigned width;          // 图像宽度
        unsigned height;         // 图像高度
        int x;                   // X坐标
        int y;                   // Y坐标
    };
}