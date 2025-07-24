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

int fizfizbaz = 0;
int some = 0;
int fooooo = 0;


void fake_main_func() {
    std::cout << "HAHAHHA LOX" << std::endl;
}

void func5() {
    std::cout <<"5" << std::endl;;
}

int add3(int a) {
    int res = a + 3;
    std::cout << "func3(" << a << ") = " << res << std::endl;
    return res;
}

int main() {
    func1();
    func4();

    add3(5);
    for (int i = 0; i < 3; i++) {
        func1();    // больше вызовов!
    }
}