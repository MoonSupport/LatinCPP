//
//  main.cpp
//  pointer
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    int x = 5;
    
    cout << x << endl;
    cout << &x << endl;

    
    // de-reference operator (*)
    
    int* xP = &x;
    
    cout << xP << endl;
    cout << &xP << endl;
    cout << *xP << endl;

    return 0;
}
