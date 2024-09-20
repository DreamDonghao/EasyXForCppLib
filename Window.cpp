#include "Window.h"

namespace efc {

    // ���캯������ʼ�����ڵĿ�Ⱥ͸߶�
    Window::Window(unsigned _width, unsigned _height,const int r,const  int g,const int b)
        : width(_width), height(_height) {
        initgraph(width, height);
        setbkcolor(RGB(r, g, b));
        cleardevice();
        FlushBatchDraw();
        BeginBatchDraw();
    }

    // ��ͼ����Ƶ�������
    void Window::drawObjectToBuffer(const ImageIcon& imageIcon) {
        putimage(imageIcon.getX(), imageIcon.getY(), imageIcon.getWidth(), imageIcon.getHeight(),
            &imageIcon.getImage(), 0, 0);
    }

    void Window::drawObjectToBuffer(const Button& button) {
        drawObjectToBuffer(button.getImageIcon());
    }

    void Window::drawObjectToBuffer(const Rectangle& rectangle) {
        setfillcolor(RGB(rectangle.getFillColorR(), rectangle.getFillColorG(), rectangle.getFillColorB()));
        setlinecolor(RGB(rectangle.getBorderColorR(), rectangle.getBorderColorG(), rectangle.getBorderColorB()));
        fillroundrect(rectangle.getX(), rectangle.getY(),
            rectangle.getX() + rectangle.getWidth(), rectangle.getY() + rectangle.getHeight(),
            rectangle.getEllipsewidth(),rectangle.getEllipseheight());
    }

    void Window::drawObjectToBuffer(ProgressBar& p) {
        drawToBuffer(Rectangle(p.getX(), p.getY(),p.getNowWidth(), p.getHeigth(), p.getR(), p.getG(), p.getB(),
            p.getR(), p.getG(), p.getB()));
    }
}