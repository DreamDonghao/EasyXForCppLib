#pragma once
#include <string>
#include "graphics.h"

namespace efc {
    // ͼƬ��
    class Image {
    public: 
        // ���캯�� ���ļ�·�� �� ��
        Image(const std::wstring& _filepath = L"",
            unsigned _width = 0, unsigned _height = 0);

        int getWidth() const;         // ��ȡ���
        int getHeight() const;        // ��ȡ�߶�
        const IMAGE& getImage() const; // ��ȡͼ��
        void setImage(const std::wstring& _filepath); // ���ò�����ͼ��
        void setWidth(unsigned _width);               // ���ÿ��
        void setHeight(unsigned _height);             // ���ø߶�
    private:
        IMAGE image;             // ͼ�����
        std::wstring filepath;   // ͼ��·��
        unsigned width;          // ͼ����
        unsigned height;         // ͼ��߶�
    };
}