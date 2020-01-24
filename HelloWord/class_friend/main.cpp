//
//  main.cpp
//  class_friend
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class B; // forward declartion

class A {
    private :
        int m_value = 1;
    
    friend void doSomething(A& a, B& b);
};

class B {
    private:
        int m_value = 2;
    
    friend void doSomething(A& a, B& b);

};

class C;

class D {
private:
    int m_value = 2;
    
public:
    void doSomething(C& c);
};

class C {
    int m_value =1;
    
    friend void D::doSomething(C& c);
    
};

void D::doSomething(C& c) {
      cout << c.m_value << endl;
  }



void doSomething(A& a, B& b) {
    cout << a.m_value << b.m_value << endl;
};

int main(int argc, const char * argv[]) {
    
    A a;
    B b;
    
    doSomething(a, b);
    
    C c;
    D d;
    d.doSomething(c);
    
    return 0;
}
