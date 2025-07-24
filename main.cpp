#include <iostream>

void func1() {
    std::cout << "func1()" << std::endl;
}

void func2() {
    std::cout << "func2()" << std::endl;
}

void func4() {
    std::cout << "just func4()" << std::endl;
}

int main() {
    func1();
    func4();
    for (int i = 0; i < 3; i++) {
        func1();    // больше вызовов!
    }
}