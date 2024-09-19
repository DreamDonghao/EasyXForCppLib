#include "Timer.h"
namespace efc {
    // Ĭ�Ϲ��캯������ʼ����ʼʱ���Ϊ��ǰʱ��
    Timer::Timer() : start_time_point(std::chrono::steady_clock::now()) {}
    // �������Ĺ��캯������ʼ����ʼʱ���Ϊ��ǰʱ���ȥ�Ѿ�����ʱ��
    Timer::Timer(long long elapsedMilliseconds) {
        start_time_point = std::chrono::steady_clock::now() - std::chrono::milliseconds(elapsedMilliseconds);
    }
    // ���ü�ʱ��������ʼʱ�������Ϊ��ǰʱ��
    void Timer::reset() {
        start_time_point = std::chrono::steady_clock::now();
    }
    // ��ȡ�ӿ�ʼʱ��㵽��ǰʱ���ľ���ʱ�䣨�Ժ���Ϊ��λ��
    long long Timer::elapsedMilliseconds() const {
        auto end_time_point = std::chrono::steady_clock::now(); // ��ȡ��ǰʱ���
        return std::chrono::duration_cast<std::chrono::milliseconds>(end_time_point - start_time_point).count(); // ���㲢���ؾ����ĺ�����
    }
    // ��ȡ�ӿ�ʼʱ��㵽��ǰʱ���ľ���ʱ�䣨����Ϊ��λ��
    long long Timer::elapsedSeconds() const {
        auto end_time_point = std::chrono::steady_clock::now(); // ��ȡ��ǰʱ���
        return std::chrono::duration_cast<std::chrono::seconds>(end_time_point - start_time_point).count(); // ���㲢���ؾ���������
    }
}