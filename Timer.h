#pragma once

#include <chrono>

namespace efc {
    // ��ʱ����
    class Timer {
    public:
        // Ĭ�Ϲ��캯������ʼ����ʼʱ���Ϊ��ǰʱ��
        Timer();

        // �������Ĺ��캯������ʼ����ʼʱ���Ϊ��ǰʱ���ȥ�Ѿ�����ʱ��
        Timer(long long elapsedMilliseconds);

        // ���ü�ʱ��������ʼʱ�������Ϊ��ǰʱ��
        void reset();

        // ��ȡ�ӿ�ʼʱ��㵽��ǰʱ���ľ���ʱ�䣨�Ժ���Ϊ��λ��
        long long elapsedMilliseconds() const;

        // ��ȡ�ӿ�ʼʱ��㵽��ǰʱ���ľ���ʱ�䣨����Ϊ��λ��
        long long elapsedSeconds() const;

    private:
        // ��¼��ʼʱ���
        std::chrono::time_point<std::chrono::steady_clock> start_time_point;
    };
}