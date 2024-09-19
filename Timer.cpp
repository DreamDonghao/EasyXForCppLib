#include "Timer.h"
namespace efc {
    // 默认构造函数，初始化开始时间点为当前时间
    Timer::Timer() : start_time_point(std::chrono::steady_clock::now()) {}
    // 带参数的构造函数，初始化开始时间点为当前时间减去已经过的时间
    Timer::Timer(long long elapsedMilliseconds) {
        start_time_point = std::chrono::steady_clock::now() - std::chrono::milliseconds(elapsedMilliseconds);
    }
    // 重置计时器，将开始时间点设置为当前时间
    void Timer::reset() {
        start_time_point = std::chrono::steady_clock::now();
    }
    // 获取从开始时间点到当前时间点的经过时间（以毫秒为单位）
    long long Timer::elapsedMilliseconds() const {
        auto end_time_point = std::chrono::steady_clock::now(); // 获取当前时间点
        return std::chrono::duration_cast<std::chrono::milliseconds>(end_time_point - start_time_point).count(); // 计算并返回经过的毫秒数
    }
    // 获取从开始时间点到当前时间点的经过时间（以秒为单位）
    long long Timer::elapsedSeconds() const {
        auto end_time_point = std::chrono::steady_clock::now(); // 获取当前时间点
        return std::chrono::duration_cast<std::chrono::seconds>(end_time_point - start_time_point).count(); // 计算并返回经过的秒数
    }
}