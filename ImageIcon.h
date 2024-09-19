#pragma once
#include <string>
#include "graphics.h"

namespace efc {
    //ͼ����Դ�ࣨ����ͼ���ڴ��ڵ�λ�ã�
    class ImageIcon {
    public:
        // ���캯��
        ImageIcon(const std::wstring& _filepath = L"",
            int _x = 0, int _y = 0,
            unsigned _width = 0, unsigned _height = 0); 
        // ��ȡͼ����
        int getWidth() const;
        // ��ȡͼ��߶�
        int getHeight() const;  
        // ��ȡͼ�����Ͻ�X����
        int getX() const;     
        // ��ȡͼ�����Ͻ�Y����
        int getY() const;      
        // ��ȡͼ��
        const IMAGE& getImage() const; 
        // ���ò�����ͼ��
        void setImage(const std::wstring& _filepath);
        void setWidth(unsigned _width);               // ���ÿ��
        void setHeight(unsigned _height);             // ���ø߶�
        void setX(int _x);                           // ����X����
        void setY(int _y);                           // ����Y����

    private:
        IMAGE image;             // ͼ�����
        std::wstring filepath;   // ͼ��·��
        unsigned width;          // ͼ����
        unsigned height;         // ͼ��߶�
        int x;                   // X����
        int y;                   // Y����
    };
}