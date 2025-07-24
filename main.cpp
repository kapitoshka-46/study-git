#include <iostream>

void func1() {
    std::cout << "func1()" << std::endl;
}

int main() {
    func1();

    for (int i = 0; i < 3; i++) {
        func1();    // больше вызовов!
    }
}