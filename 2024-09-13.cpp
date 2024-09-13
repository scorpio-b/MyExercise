//
// Created by scorpio_b on 2024/9/13.
//

#include <iostream>
using namespace std;

int addNum(int num1, int num2) {
    cout << "Entering function addNum: " << __func__ << endl;
    return num1 + num2;
}

int main() {
    int a = addNum(1, 20);
    cout << a << endl;
    cout << addNum(1, 2) << endl;
}
