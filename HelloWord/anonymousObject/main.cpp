//
//  main.cpp
//  anonymousObject
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class A {
    
    
    
    public :
    int m_value;
    
    
    A(const int& input)
    : m_value(input)
    {
        cout << "Constructor" << endl;
    }
    void print() {
        cout << m_value << endl;
    }
    ~A() {
        cout << "Descructor" << endl;
    }
    

};

class Cents {
private:
    int m_cents;
    
public:
    Cents(int cents) {
        m_cents = cents;
    }
    
    int getCents() const {
        return m_cents;
    }
};

Cents add(const Cents &c1, const Cents &c2) {
    return Cents( c1.getCents() + c2.getCents());
}

int main(int argc, const char * argv[]) {
    
    A(1).print();
    A(2).print();
    
    A a(3);
    a.print();
    
    A(4).print();

    cout << add(Cents(6), Cents(8)).getCents() << endl;
    
    
    return 0;
}
