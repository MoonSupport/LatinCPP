//
//  main.cpp
//  reference
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int value = 5;
    
    int &ref = value;
    
    cout << ref << endl;

    cout << &ref << endl;
    cout << &value << endl;
    
    
    ref = 10;
    
    cout << ref << endl;
    cout << value << endl;


    return 0;
}
