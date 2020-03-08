#include <iostream>
#include <functional>

template<typename T>
void templateFunc(T func) {
    func();
}

int main() {
    // std::function<void (void)>
    auto foo = []() { std::cout << "Hello lambda!" << std::endl; };
    
    templateFunc(foo);
    
    return 0;
}
