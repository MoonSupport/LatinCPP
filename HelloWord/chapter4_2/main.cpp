//
//  main.cpp
//  chapter4_2
//
//  Created by 문지원 on 01/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//



#include <iostream>
#include "test_cpp.hpp"

// 메모리는 초기화 하는 순간 할당된다.

int value = 123;

void doSomething1()
{
    using namespace std;
    int a = 1; // 함수가 끝나면 메모리를 반납, 함수가 시작하면 다시 다른 메모리 사용
    ++a;
    cout << a << endl;
}

void doSomething2()
{
    using namespace std;
    static int a = 1; // static -> OS가 받은 메모리 주소가 static 이라는 말씀! 같은 주소를 계속 사용한다.
    ++a;
    cout << a << endl;
}

extern void doSomething4();

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << value << endl;
    
    int value = 1;
    
    cout << ::value << endl;
    cout << value << endl;
    
    doSomething1();
    doSomething1();
    doSomething1();
    doSomething1();
    
    doSomething2();
    doSomething2();
    doSomething2();
    doSomething2();
    
    doSomething3();
    
    doSomething4();

    cout << Constants::grativy << Constants::pi << endl;
    
    
    return 0;
}
