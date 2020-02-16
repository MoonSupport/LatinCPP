//
//  main.cpp
//  dangerousException
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <memory>

using namespace std;

int main(int argc, const char * argv[]) {
    
    try{
        int* i = new int[10000000];
        unique_ptr<int> up_i(i);
        
        throw 'error';
    }catch(char& e) {
        cout << e << endl;
    }
    
    
    
    return 0;
}
