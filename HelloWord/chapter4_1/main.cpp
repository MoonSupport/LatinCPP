//
//  main.cpp
//  chapter4_1
//
//  Created by 문지원 on 01/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

namespace work1::work11 {
    int orange = 6;
}


int main(int argc, const char * argv[]) {
    
    using namespace std;
    
    int apple = 5;
    
    cout << apple << endl;
    
    {
        int apple = 1;
        cout << apple << endl;
    }

    cout << apple << endl;
    
    int banana = 5;
    
    cout << banana << endl;
    
    {
        banana = 1;
        cout << banana << endl;
    }
    
    cout << banana << endl;
    
    cout << work1::work11::orange << endl;
    
    return 0;
}
