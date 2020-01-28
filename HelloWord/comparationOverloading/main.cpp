//
//  main.cpp
//  comparationOverloading
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cents {
    private :
        int m_cents;
    
    public:
        Cents(int cents = 0) {
            m_cents = cents;
        }
    
        Cents operator - () const {
            return Cents(-m_cents);
        }
    
    bool operator ! () const {
        return (m_cents == 0) ? true : false;
    }
    
        int getCents() const {
            return m_cents;
        }
    
        int& getCents() {
            return m_cents;
        }
    
        friend bool operator == (const Cents &c1, const Cents &c2) {
            return c1.m_cents == c2.m_cents;
        };
        
        friend std::ostream& operator << (std::ostream &out, const Cents& cents) {
            out << cents.m_cents << endl;
            return out;
        }
        
};

int main(int argc, const char * argv[]) {
    
    Cents c1(10);
    Cents c2(6);
    
    if(c1 == c2) {
        cout << "Equals" << endl;
    }else{
        cout << "Diff" << endl;
    }
    
    cout << c1 << endl;
    cout << -c1 << endl;
    cout << Cents(-10) << endl;
    
    cout << !Cents(0) << endl;
    
    cout << !!Cents(0) << endl;

    
    return 0;
}
