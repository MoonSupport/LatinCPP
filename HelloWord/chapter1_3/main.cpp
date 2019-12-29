//
//  main.cpp
//  chapter1_3
//
//  Created by 문지원 on 29/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <bitset>

int main()
{
    using namespace std;
    
    int i = -1;
    int j = 3;
    signed int k = 123;
    char a = 'H';
    
    cout <<(uintptr_t)static_cast<void*>(&a) << endl;
    cout <<(uintptr_t)static_cast<void*>(&i) << endl;
    
    return 0;

}
