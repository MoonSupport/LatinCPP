//
//  Header.cpp
//  Header
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include "Header.h"

Cal::Cal (int init){
    _init = init;
};

Cal Cal::add(int value) {
    
    _init += value;
    
    return *this;
}

Cal Cal::sub(int value) {
    
    _init -= value;
    
    return *this;
}

Cal Cal::mul(int value) {
    
    _init *= value;
    
    return *this;
}

void Cal::print(){
    using namespace std;
    cout << _init << endl;
}
