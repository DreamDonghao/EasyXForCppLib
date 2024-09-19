#pragma once
#include <string>
#include "graphics.h"

namespace efc {
    // 图片类
    class Image {
    public: 
        // 构造函数 ：文件路径 宽 高
        Image(const std::wstring& _filepath = L"",
            unsigned _width = 0, unsigned _height = 0);

        int getWidth() const;         // 获取宽度
        int getHeight() const;        // 获取高度
        const IMAGE& getImage() const; // 获取图像
        void setImage(const std::wstring& _filepath); // 设置并加载图像
        void setWidth(unsigned _width);               // 设置宽度
        void setHeight(unsigned _height);             // 设置高度
    private:
        IMAGE image;             // 图像对象
        std::wstring filepath;   // 图像路径
        unsigned width;          // 图像宽度
        unsigned height;         // 图像高度
    };
}