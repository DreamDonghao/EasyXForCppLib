#pragma once

#include <chrono>

namespace efc {
    // 计时器类
    class Timer {
    public:
        // 默认构造函数，初始化开始时间点为当前时间
        Timer();

        // 带参数的构造函数，初始化开始时间点为当前时间减去已经过的时间
        Timer(long long elapsedMilliseconds);

        // 重置计时器，将开始时间点设置为当前时间
        void reset();

        // 获取从开始时间点到当前时间点的经过时间（以毫秒为单位）
        long long elapsedMilliseconds() const;

        // 获取从开始时间点到当前时间点的经过时间（以秒为单位）
        long long elapsedSeconds() const;

    private:
        // 记录开始时间点
        std::chrono::time_point<std::chrono::steady_clock> start_time_point;
    };
}