//
//  main.cpp
//  commandArgument
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    cout << "app open" << endl;
    
    for (int count = 0; count < argc; ++count) {
        cout << argv[count] << endl;
    }
    
    
    
    return 0;
}
