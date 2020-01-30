//
//  main.cpp
//  RVO
//
//  Created by 문지원 on 29/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cassert>
using namespace std;

class Fraction {
private:
    int m_numerator;
    int m_denominator;
    
public:
    explicit Fraction(int num = 0, int den = 1)
    : m_numerator(num), m_denominator(den)
    {
        assert(den != 0);
    }
    
    Fraction (const Fraction &fraction)
    :m_numerator(fraction.m_numerator), m_denominator(fraction.m_denominator)
    {
        cout << "Call Copy constructor" << endl;
    }
    
    friend std::ostream & operator << (std::ostream &out, const Fraction& f) {
        out << f.m_numerator << " /" << f.m_denominator << endl;
        return out;
    }
    


};

void doSomething(Fraction frac) {
    std::cout << frac << endl;
}

int main(int argc, const char * argv[]) {
    Fraction frac(3,5);
    
    doSomething(frac);
    
    return 0;
}
