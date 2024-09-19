#include "Image.h"

namespace efc {

    // ���캯������ʼ��·����λ�úʹ�С������ͼ��
    Image::Image(const std::wstring& _filepath,
        const unsigned _width, const unsigned _height)
        : filepath(_filepath), width(_width), height(_height) {
        if (!filepath.empty()) {
            loadimage(&image, filepath.c_str(), width, height);
        }
    }

    // ��ȡ���
    int Image::getWidth() const {
        return width;
    }

    // ��ȡ�߶�
    int Image::getHeight() const {
        return height;
    }

    // ��ȡͼ������
    const IMAGE& Image::getImage() const {
        return image;
    }

    // ���ò�����ͼ��
    void Image::setImage(const std::wstring& _filepath) {
        filepath = _filepath;
        loadimage(&image, filepath.c_str());
    }

    // ���ÿ�Ȳ����¼���ͼ��
    void Image::setWidth(const unsigned _width) {
        width = _width;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // ���ø߶Ȳ����¼���ͼ��
    void Image::setHeight(const unsigned _height) {
        height = _height;
        loadimage(&image, filepath.c_str(), width, height);
    }
}
