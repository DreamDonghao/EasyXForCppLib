#include "ImageIcon.h"

namespace efc {

    // 构造函数：初始化路径、位置和大小，加载图像
    ImageIcon::ImageIcon(const std::wstring& _filepath, const int _x, const int _y,
        const unsigned _width, const unsigned _height)
        : filepath(_filepath), width(_width), height(_height), x(_x), y(_y) {
        if (!filepath.empty()) {
            loadimage(&image, filepath.c_str(), width, height);
        }
    }

    // 获取宽度
    int ImageIcon::getWidth() const {
        return width;
    }

    // 获取高度
    int ImageIcon::getHeight() const {
        return height;
    }

    // 获取X坐标
    int ImageIcon::getX() const {
        return x;
    }

    // 获取Y坐标
    int ImageIcon::getY() const {
        return y;
    }

    // 获取图像引用
    const IMAGE& ImageIcon::getImage() const {
        return image;
    }

    // 设置并加载图像
    void ImageIcon::setImage(const std::wstring& _filepath) {
        filepath = _filepath;
        loadimage(&image, filepath.c_str());
    }

    // 设置宽度并重新加载图像
    void ImageIcon::setWidth(const unsigned _width) {
        width = _width;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // 设置高度并重新加载图像
    void ImageIcon::setHeight(const unsigned _height) {
        height = _height;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // 设置X坐标
    void ImageIcon::setX(const int _x) {
        x = _x;
    }

    // 设置Y坐标
    void ImageIcon::setY(const int _y) {
        y = _y;
    }
}
