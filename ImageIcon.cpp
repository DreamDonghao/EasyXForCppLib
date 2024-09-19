#include "ImageIcon.h"

namespace efc {

    // ���캯������ʼ��·����λ�úʹ�С������ͼ��
    ImageIcon::ImageIcon(const std::wstring& _filepath, const int _x, const int _y,
        const unsigned _width, const unsigned _height)
        : filepath(_filepath), width(_width), height(_height), x(_x), y(_y) {
        if (!filepath.empty()) {
            loadimage(&image, filepath.c_str(), width, height);
        }
    }

    // ��ȡ���
    int ImageIcon::getWidth() const {
        return width;
    }

    // ��ȡ�߶�
    int ImageIcon::getHeight() const {
        return height;
    }

    // ��ȡX����
    int ImageIcon::getX() const {
        return x;
    }

    // ��ȡY����
    int ImageIcon::getY() const {
        return y;
    }

    // ��ȡͼ������
    const IMAGE& ImageIcon::getImage() const {
        return image;
    }

    // ���ò�����ͼ��
    void ImageIcon::setImage(const std::wstring& _filepath) {
        filepath = _filepath;
        loadimage(&image, filepath.c_str());
    }

    // ���ÿ�Ȳ����¼���ͼ��
    void ImageIcon::setWidth(const unsigned _width) {
        width = _width;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // ���ø߶Ȳ����¼���ͼ��
    void ImageIcon::setHeight(const unsigned _height) {
        height = _height;
        loadimage(&image, filepath.c_str(), width, height);
    }

    // ����X����
    void ImageIcon::setX(const int _x) {
        x = _x;
    }

    // ����Y����
    void ImageIcon::setY(const int _y) {
        y = _y;
    }
}
