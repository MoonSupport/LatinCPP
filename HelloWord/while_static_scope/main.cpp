//
//  main.cpp
//  while_static_scope
//
//  Created by 문지원 on 11/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    unsigned int count = 10;
    
    while(count >= 0){
        count--;
        cout << "unsigned count" << count << endl;
    }
    
    while(1)
    {
        static int static_count = 0;
        cout << "static_count" << static_count << endl;
        static_count++;
        
        int count = 0;
        cout << "count" << count << endl;
        count++;
    }
    
    return 0;
}
