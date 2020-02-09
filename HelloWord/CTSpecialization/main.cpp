

#include <iostream>
#include <array>

using namespace std;

template<typename T>
class A {
public:
    void doSomething() {
        cout << typeid(T).name() << endl;
    }
    
    void test() {
        
    }
};

template<>
class A<char> {
public:
    void doSomething() {
        cout << "CHAR" << endl;
    }
    

};

int main(int argc, const char * argv[]) {
    
    A<int> a_int;
    A<double> a_double;
    A<char> a_char;
    
    a_int.test();
    a_double.test();
//    a_char.test(); //쌉불가
    
    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();
    
    return 0;
}
