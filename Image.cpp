#include "Image.h"

namespace efc {

    // 构造函数：初始化路径、位置和大小，加载图像
    Image::Image(const std::wstring& _filepath,
        const unsigned _width, const unsigned _height)
        : filepath(_filepath), width(_width), height(_height) {
        if (!filepath.empty()) {
            loadimage(&image, filepath.c_str(), width, height);
        }
    }

    // 获取宽度
    int Image::getWidth() const {
        return width;
    }

    // 获取高度
    int Image::getHeight() const {
        return height;
    }

    // 获取图像引用
    const IMAGE& Image::getImage() const {
        return image;
    }

    // 设置并加载图像
    void Image::setImage(const std::wstring& _filepath) {
        filepath = _filepath;
        loadimage(&image, filepath.c_str());
    }

    // 设置宽度并重新加载图像
    void Image::setWidth(const unsigned _width) {
        width = _width;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // 设置高度并重新加载图像
    void Image::setHeight(const unsigned _height) {
        height = _height;
        loadimage(&image, filepath.c_str(), width, height);
    }
}
