//
//  main.cpp
//  ArithmeticOperatorOverloading
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Cents {
    private :
        int m_cents;
    
    public:
        Cents(int cents = 0) {
            m_cents = cents;
        }
        
    int getCents() const {
        return m_cents;
    }
    
    int& getCents() {
        return m_cents;
    }
    
    friend Cents operator + (const Cents &c1, const Cents &c2);
    Cents operator - (const Cents &c2){
        return Cents(this->m_cents - c2.m_cents);
    }

};

void add (const Cents &c1, const Cents &c2, Cents &c_out) {
    c_out.getCents() = c1.getCents() + c2.getCents();
}

Cents add2 (const Cents &c1, const Cents &c2) {
    return Cents(c1.getCents() + c2.getCents());
}

Cents operator + (const Cents &c1, const Cents &c2) {
    return Cents(c1.getCents() + c2.getCents());
}


int main(int argc, const char * argv[]) {
    
    Cents cents1(6);
    Cents cents2(8);
    
    
    Cents sum;
    add(cents1, cents2, sum);
    
    cout << sum.getCents() << endl;
    cout << add2(cents1,cents2).getCents() << endl;
    cout << (cents1 + cents2 + Cents(6) + Cents(10)).getCents() << endl;
    cout << (cents2 - cents1).getCents() << endl;
    
    
    return 0;
}
