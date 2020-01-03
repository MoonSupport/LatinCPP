//
//  main.cpp
//  chapter4_linking
//
//  Created by 문지원 on 01/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#pragma once


#include <iostream>
#include "MyConstants.h"

/**
        초기화 안한 변수 //external linkage
        초기화 안한 스태틱 변수 // internal linkage 및 메모리 내부에서 변경 없음
 
        extern const int a // const에도 불구하고 초기화 안해도 됨. 대신 다른 어디선가 초기화를 해주긴 해야함 , 다른 파일에서 접근 가능
 
        초기화 한 변수
        초기화한 스태틱 변수
        const 초기화한 변수
 
            
 */

extern void doSomething();

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "In main.cpp" << Constants::pi << endl;
    doSomething();
    return 0;
}
