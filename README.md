# EasyXForCppLib

# EFC UI Library

EFC UI Library 是一个用于创建图形用户界面的C++库，包含按钮、图像、进度条、矩形等UI元素。

## 目录

- 安装
- 使用
  - Button 类
  - Image 类
  - ImageIcon 类
  - InteractiveRegion 类
  - Message 类
  - ProgressBar 类
  - Rectangle 类
  - Screen 类
  - Timer 类
  - Window 类
- 示例代码
- 贡献
- 许可证

## 安装

1. 克隆仓库到本地：

   ```sh
   git clone https://github.com/yourusername/efc-ui-library.git
   ```

2. 进入项目目录：

   ```sh
   cd efc-ui-library
   ```

3. 编译项目：

   ```sh
   make
   ```

## 使用

### Button 类

按钮类用于创建和管理按钮。

#### 声明

```cpp
efc::Button button(message, L"button.png", 50, 50, 100, 50);
```

#### 方法

- `Button(Message& message, const std::wstring& imagePath, const int x, const int y, const unsigned width, const unsigned height)`: 构造函数，初始化按钮图像和交互区域。
- `const ImageIcon& getImageIcon() const`: 获取按钮的图像资源。
- `const bool isLeftClick()`: 检查是否左键点击。

### Image 类

图片类用于加载和管理图像。

#### 声明

```cpp
efc::Image image(L"image.png", 100, 100);
```



#### 方法

- `Image(const std::wstring& _filepath, unsigned _width, unsigned _height)`: 构造函数，初始化图像路径、宽度和高度。
- `int getWidth() const`: 获取宽度。
- `int getHeight() const`: 获取高度。
- `const IMAGE& getImage() const`: 获取图像。
- `void setImage(const std::wstring& _filepath)`: 设置并加载图像。
- `void setWidth(unsigned _width)`: 设置宽度。
- `void setHeight(unsigned _height)`: 设置高度。

### ImageIcon 类

图像资源类，用于管理图像及其在窗口中的位置。

#### 声明

```cpp
efc::ImageIcon imageIcon(L"icon.png", 200, 200, 100, 100);
```



#### 方法

- `ImageIcon(const std::wstring& _filepath, int _x, int _y, unsigned _width, unsigned _height)`: 构造函数，初始化图像路径、位置和尺寸。
- `int getWidth() const`: 获取宽度。
- `int getHeight() const`: 获取高度。
- `int getX() const`: 获取X坐标。
- `int getY() const`: 获取Y坐标。
- `const IMAGE& getImage() const`: 获取图像。
- `void setImage(const std::wstring& _filepath)`: 设置并加载图像。
- `void setWidth(unsigned _width)`: 设置宽度。
- `void setHeight(unsigned _height)`: 设置高度。
- `void setX(int _x)`: 设置X坐标。
- `void setY(int _y)`: 设置Y坐标。

### InteractiveRegion 类

可交互区域类，用于检测鼠标点击事件。

#### 声明

```cpp
efc::InteractiveRegion region(50, 50, 100, 50, message);
```



#### 方法

- `InteractiveRegion(const int _x, const int _y, const int _width, const int _height, Message& message)`: 构造函数，初始化区域位置、大小和消息对象引用。
- `const bool isLeftMouseButtonClick()`: 判断左键是否在区域内点击。

### Message 类

处理输入事件类，用于检测键盘和鼠标事件。

#### 声明

```cpp
efc::Message message;
```



#### 方法

- `Message()`: 构造函数。
- `void flush()`: 刷新状态。
- `const bool isLeftMouseButtonDown() const`: 左键是否按下。
- `const bool isAKeyDown() const`: A键是否按下。
- `const bool isBKeyDown() const`: B键是否按下。
- `const bool isCKeyDown() const`: C键是否按下。
- `const bool isDKeyDown() const`: D键是否按下。
- `const bool isEKeyDown() const`: E键是否按下。
- `const bool isFKeyDown() const`: F键是否按下。
- `const bool isGKeyDown() const`: G键是否按下。
- `const bool isHKeyDown() const`: H键是否按下。
- `const bool isIKeyDown() const`: I键是否按下。
- `const bool isJKeyDown() const`: J键是否按下。
- `const bool isKKeyDown() const`: K键是否按下。
- `const bool isLKeyDown() const`: L键是否按下。
- `const bool isMKeyDown() const`: M键是否按下。
- `const bool isNKeyDown() const`: N键是否按下。
- `const bool isOKeyDown() const`: O键是否按下。
- `const bool isPKeyDown() const`: P键是否按下。
- `const bool isQKeyDown() const`: Q键是否按下。
- `const bool isRKeyDown() const`: R键是否按下。
- `const bool isSKeyDown() const`: S键是否按下。
- `const bool isTKeyDown() const`: T键是否按下。
- `const bool isUKeyDown() const`: U键是否按下。
- `const bool isVKeyDown() const`: V键是否按下。
- `const bool isWKeyDown() const`: W键是否按下。
- `const bool isXKeyDown() const`: X键是否按下。
- `const bool isYKeyDown() const`: Y键是否按下。
- `const bool isZKeyDown() const`: Z键是否按下。
- `const bool isSpaceKeyDown() const`: 判断空格是否按下。
- `const int getMouseX() const`: 获取鼠标X坐标。
- `const int getMouseY() const`: 获取鼠标Y坐标。

### ProgressBar 类

进度条类，用于显示进度。

#### 声明

```cpp
efc::ProgressBar progressBar(300, 300, 200, 30, 0, 255, 0, 100, 50);
```



#### 方法

- `ProgressBar(const int _x, const int _y, const int _width, const int _height, const int r, const int g, const int b, const double _maxVal, const double _nowVal)`: 构造函数，初始化进度条位置、尺寸、颜色和进度值。
- `void upDateNowVal(const double _nowVal)`: 更新当前值。
- `int getX() const`: 获取X坐标。
- `int getY() const`: 获取Y坐标。
- `unsigned int getWidth() const`: 获取宽度。
- `unsigned int getHeigth() const`: 获取高度。
- `int getR() const`: 获取颜色分量R。
- `int getG() const`: 获取颜色分量G。
- `int getB() const`: 获取颜色分量B。
- `double getMaxVal() const`: 获取最大值。
- `double getNowVal() const`: 获取当前值。
- `double getNowWidth() const`: 获取当前宽度。

### Rectangle 类

矩形类，用于绘制矩形。

#### 声明

```cpp
efc::Rectangle rectangle(400, 400, 150, 100, 255, 0, 0, 0, 0, 0);
```



#### 方法

- `Rectangle(int x, int y, unsigned width, unsigned height, int fillColorR, int fillColorG, int fillColorB, int borderColorR, int borderColorG, int borderColorB)`: 构造函数，初始化矩形的位置、尺寸、填充颜色和边框颜色。
- `int getX() const`: 获取X坐标。
- `int getY() const`: 获取Y坐标。
- `unsigned getWidth() const`: 获取宽度。
- `unsigned getHeight() const`: 获取高度。
- `void setX(int _x)`: 设置X坐标。
- `void setY(int _y)`: 设置Y坐标。
- `void setWidth(unsigned _width)`: 设置宽度。
- `void setHeight(unsigned _height)`: 设置高度。
- `int getFillColorR() const`: 获取填充颜色的红色分量。
- `int getFillColorG() const`: 获取填充颜色的绿色分量。
- `int getFillColorB() const`: 获取填充颜色的蓝色分量。
- `int getBorderColorR() const`: 获取边框颜色的红色分量。
- `int getBorderColorG() const`: 获取边框颜色的绿色分量。
- `int getBorderColorB() const`: 获取边框颜色的蓝色分量。
- `void setFillColor(int r, int g, int b)`: 设置填充颜色。
- `void setBorderColor(int r, int g, int b)`: 设置边框颜色。

### Screen 类

屏幕类用于管理和更新屏幕上的所有UI元素。

#### 声明

```cpp
efc::Screen screen(window, message);
```

#### 方法

- `Screen(Window& _window, Message& _message)`: 构造函数，初始化窗口和消息对象。
- `void upDate()`: 更新屏幕，绘制所有元素。
- `template<typename... Args> void AddElement(Args... args)`: 添加各种UI元素。

### Timer 类

计时器类用于测量时间间隔。

#### 声明

```cpp
efc::Timer timer;
```



#### 方法

- `Timer()`: 默认构造函数，初始化开始时间点为当前时间。
- `Timer(long long elapsedMilliseconds)`: 带参数的构造函数，初始化开始时间点为当前时间减去已经过的时间。
- `void reset()`: 重置计时器，将开始时间点设置为当前时间。
- `long long elapsedMilliseconds() const`: 获取从开始时间点到当前时间点的经过时间（以毫秒为单位）。
- `long long elapsedSeconds() const`: 获取从开始时间点到当前时间点的经过时间（以秒为单位）。

### Window 类

窗口类用于创建和管理窗口。

#### 声明

```cpp
efc::Window window(800, 600, 255, 255, 255);
```



#### 方法

- `Window(unsigned _width, unsigned _height, const int r, const int g, const int b)`: 构造函数，初始化窗口的宽度、高度和背景颜色。
- `void setBackgroundColor(const int r, const int g, const int b)`: 设置背景颜色，使用RGB值。
- `const unsigned getWidth() const`: 获取窗口的宽度。
- `const unsigned getHeight() const`: 获取窗口的高度。
- `void flushBuffer()`: 刷新缓冲区，更新窗口显示内容。
- `void clear()`: 清空窗口。
- `template<typename... Args> void drawToBuffer(Args... args)`: 将对象加载绘制到缓冲区。

## 示例代码

以下是一个完整的示例代码，展示如何使用EFC UI Library创建一个简单的图形界面：

```cpp
#include "Window.h"
#include "Button.h"
#include "ImageIcon.h"
#include "ProgressBar.h"
#include "Rectangle.h"
#include "Message.h"

int main() {
    efc::Window window(800, 600, 255, 255, 255);
    efc::Message message;

    efc::Button button(message, L"button.png", 50, 50, 100, 50);
    efc::ImageIcon imageIcon(L"icon.png", 200, 200, 100, 100);
    efc::ProgressBar progressBar(300, 300, 200, 30, 0, 255, 0, 100, 50);
    efc::Rectangle rectangle(400, 400, 150, 100, 255, 0, 0, 0, 0, 0);

    window.drawToBuffer(button, imageIcon, progressBar, rectangle);
    window.flushBuffer();

    while (true) {
        message.flush();
        if (message.isLeftMouseButtonDown()) {
            // 处理左键点击事件
        }
    }

    return 0;
}
```



## 贡献

欢迎贡献代码！请先fork本仓库，然后提交pull request。

## 许可证

本项目基于MIT许可证开源，详细信息请参见LICENSE文件。