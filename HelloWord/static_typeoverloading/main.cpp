//
//  main.cpp
//  static_typeoverloading
//
//  Created by 문지원 on 28/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

class Cents {
private:
    int m_cents;
    
public:
    Cents(int cents = 0) {
        m_cents = cents;
    }
    
    int getCents() {
        return m_cents;
    }
    
    void setCents(int cents) {
        m_cents = cents;
    }
    
    operator int() {
        cout << "Cast!!" << endl;
        return m_cents;
    }
    
};
        
class Dollar {
    private :
    int m_dollar = 0;

    public :
        Dollar(const int& input) : m_dollar(input) {

    }

    operator Cents() {
        return Cents(m_dollar * 100);
    }
};

void printInt(const int &value) {
    cout << value << endl;
}

int main(int argc, const char * argv[]) {
//    Cents cents(7);
//
//    printInt(cents);
    
        Dollar dollar(2);
        
        Cents cents = dollar;
        
        printInt(cents);
        
    return 0;
}
