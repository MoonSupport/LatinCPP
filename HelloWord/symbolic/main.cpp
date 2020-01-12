//
//  main.cpp
//  symbolic
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    const char *name = "Jack Jack";
    const char *name2 = "Jack Jack";
    
    cout << (uintptr_t)name << endl;
    cout << (uintptr_t)name2 << endl;
    
    const char *name3 = "Jack Jack2";
    
    cout << (uintptr_t)name3 << endl;
    
    char c = 'Q';
    
    cout << &c << endl;
    
    return 0;
}
