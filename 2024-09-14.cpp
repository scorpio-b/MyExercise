//
// Created by scorpio_b on 2024/9/14.
//

#include <iostream>
#include <thread>
#include <vector>
#include <chrono>
#include <valarray>

// 占用 CPU 的计算任务
void cpu_task(int id) {
    // 繁重的计算任务，比如大循环
    while (true) {
        // 模拟一些工作，执行一个耗时的计算
        double result = 0.0;
        for (int i = 0; i < 1000000; ++i) {
            result += std::sin(i) * std::cos(i);
        }
        // 防止编译器优化，输出计算结果
        // if (id == 0) {
            // std::cout << "Thread " << id << ": result = " << result << std::endl;
        // }
        // 让线程每隔一段时间输出一次，观察效果
        // std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    }
}

int main() {
    const int num_threads{4};  // 使用4个线程占满4核CPU
    std::vector<std::thread> threads;

    // 启动4个线程
    for (int i = 0; i < num_threads; ++i) {
        threads.emplace_back(cpu_task, i);
    }

    // 等待所有线程结束
    for (auto& t : threads) {
        t.join();
    }

    return 0;
}

