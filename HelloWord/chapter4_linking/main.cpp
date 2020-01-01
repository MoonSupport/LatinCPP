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

extern void doSomething();

int main(int argc, const char * argv[]) {
    using namespace std;
    cout << "In main.cpp" << Constants::pi << endl;
    doSomething();
    return 0;
}
