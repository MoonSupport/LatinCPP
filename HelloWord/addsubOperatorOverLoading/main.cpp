//
//  main.cpp
//  addsubOperatorOverLoading
//
//  Created by 문지원 on 28/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

class Digit
{
private:
    int m_digit;
    
public:
    Digit(int digit= 0) : m_digit(digit) {
        
    }
    
    Digit & operator ++ () {
        ++ m_digit;
        
        cout << "야호 " << this << endl;
         cout << "야호ㅎㅎ" << *this << endl;
        
        return *this;
    };
    
    Digit& operator -- () {
        -- m_digit;
        return *this;
    };
    
    Digit operator ++ (int) //후위 연산자
    {
        Digit temp(m_digit);
        ++(*this);
        return temp;
    }

    friend ostream & operator << (ostream &out , const Digit &d) {
        out << d.m_digit;
        return out;
    }
};

int main(int argc, const char * argv[]) {
    
    Digit d(10);
    
    int a = 1;
    int* aP = &a; // & 값 = 값을 주소로 만든다. || 타입 * = 타입의 주소 타입이다.
    int& aL = a;
    cout << "aP" << aP << endl;
    cout << "*aP" << *aP << endl; // 변수의 주소 값
    cout << "&aP" << &aP << endl; // 변수의 주소
    cout << "aL" << aL << endl;

    
    
    
    cout << ++d << endl;
    cout << ++d << endl;
    cout << ++d << endl;

    cout << d++ << endl;
    cout << d++ << endl;
    cout << d++ << endl;


    cout << d << endl;

    
    return 0;
}
