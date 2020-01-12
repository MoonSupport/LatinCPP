//
//  main.cpp
//  memoryleack
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    //memory leak
    while(true)
    {
        int *ptr = new int;
        cout << ptr << endl;
        
        //delete ptr
    }
    return 0;
}
