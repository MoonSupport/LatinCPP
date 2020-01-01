//
//  test.cpp
//  chapter4_linking
//
//  Created by 문지원 on 01/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#pragma once



#include <iostream>
#include "MyConstants.h"


void doSomething() {
    using namespace std;
    cout << "In test.cpp" << Constants::pi << endl;
}
