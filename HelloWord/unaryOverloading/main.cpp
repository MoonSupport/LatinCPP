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
    
    friend std::ostream& operator << (std::ostream &out, const Cents& cents) {
        out << cents.m_cents << endl;
        return out;
    }
    
    Cents operator - () const {
        return Cents(-m_cents);
    }
    
    bool operator ! () const {
        return (m_cents == 0) ? true : false;
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
    
    cout << cents1 << endl;
    cout << -cents1 << endl;
    cout << -Cents(-10) << endl;
    cout << !Cents(0) << endl;
    
    return 0;
}
