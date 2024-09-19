#pragma once
#include <vector>
#include "Window.h"

namespace efc {
    class Screen {
    public:
        Screen(Window& _window,Message& _message);

        // 更新屏幕，绘制所有元素
        void upDate();

        // 添加各种 UI 元素
        template<typename... Args>
        void AddElement(Args... args) {
            (add(args), ...); // 展开可变参数并调用add方法
        }

    private:
        Window& window;
        Message& message;
        // 存储各种 UI 元素的指针
        std::vector<Button*> buttons;
        std::vector<ImageIcon*> imageIcons;
        std::vector<ProgressBar*> progressBars;
        std::vector<Rectangle*> rectangles;

        // 添加各种元素的方法
        void add(Button* button) { buttons.push_back(button); }
        void add(ImageIcon* imageIcon) { imageIcons.push_back(imageIcon); }
        void add(ProgressBar* progressBar) { progressBars.push_back(progressBar); }
        void add(Rectangle* rectangle) { rectangles.push_back(rectangle); }
    };
}