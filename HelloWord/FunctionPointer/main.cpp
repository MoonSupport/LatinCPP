//
//  main.cpp
//  FunctionPointer
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int func()
{
    return 5;
}

int goo() {
    return 10;
}

int foo(int x) {
    return x;
}

int main(int argc, const char * argv[]) {
    
    int(*fcptr)() = func; // int를 리턴하는 함수의 주소를 fcptr에 담는다.
    
    cout << fcptr() << endl;
    
    fcptr = goo;
    
    cout << fcptr() << endl;
    
    int(*foofoo)(int) = foo;
    
    cout << foofoo(1) << endl;
    
    return 0;
}
