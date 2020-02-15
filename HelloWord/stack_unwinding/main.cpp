//
//  main.cpp
//  stack_unwinding
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

void last() {
    cout << "last" << endl;
    cout << "throw exception" << endl;
    
    throw -1;
    
    cout << "End last" << endl;
}

void third() {
    cout << "third" << endl;
    last();
    cout << "end third" << endl;
}


void second() {
    cout << "second" << endl;
    
    try {
        third();
    }
    catch(double) {
        cerr << "second caught int exception" << endl;
    }
    
    cout << "end second" << endl;
}


void first() {
    cout << "first" << endl;
    
    try {
        second();
    }
    catch(int) {
        cerr << "first caught int exception" << endl;
    }
    
    cout << "end first" << endl;
}

int main(int argc, const char * argv[]) {
    cout << "start" << endl;
    
    try{
        first();
    }catch(int){
        cerr << "main caught int exceptuin" << endl;
    }
    
    return 0;
}

