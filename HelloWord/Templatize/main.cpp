//
//  main.cpp
//  pointerSpecailization
//
//  Created by 문지원 on 10/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

template<class T>
class A {
    private :
    T m_value;
    
    public :
    A(const T& input) : m_value(input) {
        
    }
    
    void print() {
        cout << m_value << endl;
    }
    
    template<typename TT>
    void doSomething() {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
    }
    
    template<typename TT>
    void doSomething2() {
        cout << (TT)m_value << endl;
    }
};

template<class T>
class A<T*> {
    private :
    T* m_value;
    
    public :
    A(T* input) : m_value(input) {
        
    }
    
    void print() {
        cout << *m_value << endl;
    }
};

int main(int argc, const char * argv[]) {
    
    A<int> a_int(123);
    a_int.print();
    
    A<double> a_dobule(123.456);

    
    int temp = 456;
    
    A<int*> a_int_ptr(&temp);
    a_int_ptr.print();
    
    double temp_d = 3.14;
    A<double*> a_double_ptr(&temp_d);
    a_double_ptr.print();
    
    a_int.doSomething<double>();
    
    a_dobule.doSomething2<int>();

    
    return 0;
}
