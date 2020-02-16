//
//  main.cpp
//  functiontry
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

void doSomething()
try{
    throw -1;
}catch(...) {
    cout << "Catch in doSomething()" << endl;
}
    
class A {
private:
    int m_x;
    
public:
    A(int x) : m_x(x) {
    if(x <=0)
    throw 1;
    }
    };
    
    class B : public A {
public:
    B(int x) try : A(x)
    {}
    catch(...) {
    cout << "Catch in B const" << endl;
    throw;
    }
    };

int main(int argc, const char * argv[]) {
    try{
    doSomething();
    }catch(...) {
    cout << "Catch main" << endl;
    }
    
    B b(0);
    return 0;
}
