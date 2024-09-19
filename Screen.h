#pragma once
#include <vector>
#include "Window.h"

namespace efc {
    class Screen {
    public:
        Screen(Window& _window,Message& _message);

        // ������Ļ����������Ԫ��
        void upDate();

        // ��Ӹ��� UI Ԫ��
        template<typename... Args>
        void AddElement(Args... args) {
            (add(args), ...); // չ���ɱ����������add����
        }

    private:
        Window& window;
        Message& message;
        // �洢���� UI Ԫ�ص�ָ��
        std::vector<Button*> buttons;
        std::vector<ImageIcon*> imageIcons;
        std::vector<ProgressBar*> progressBars;
        std::vector<Rectangle*> rectangles;

        // ��Ӹ���Ԫ�صķ���
        void add(Button* button) { buttons.push_back(button); }
        void add(ImageIcon* imageIcon) { imageIcons.push_back(imageIcon); }
        void add(ProgressBar* progressBar) { progressBars.push_back(progressBar); }
        void add(Rectangle* rectangle) { rectangles.push_back(rectangle); }
    };
}