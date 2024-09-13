//
// Created by scorpio_b on 2024/9/13.
//

#include <iostream>
using namespace std;

int addNum(int num1, int num2) {
    cout << "Entering function addNum: " << __func__ << endl;
    return num1 + num2;
}

[[nodiscard("Some explanation")]] int func() {
    return 42;
}

int funcT(int a, [[maybe_unused]] int b) {
    return 89;
}

int makeSum(initializer_list<int> list) {
    int total{0};
    for (int value : list) {
        total += value;
    }
    return total;
}

int main() {
    int a = addNum(1, 20);
    cout << a << endl;
    cout << addNum(1, 2) << endl;

    func();
    funcT(2, 3);

    int b = makeSum({1, 2, 3});
    int c = makeSum({1, 2, 3, 4});
    cout << b << endl;
    cout << c << endl;

    int x{3};
    int* myArray = new int[]{0, 1, 2, 3, 4};

}
