//
//  main.cpp
//  chapter4_3
//
//  Created by 문지원 on 03/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

namespace a {
    int my_var(10);
}

namespace b {
    int my_var(12);
}

int main(int argc, const char * argv[]) {
    
    using namespace std;
    
//    using namespace a;
//    using namespace b;
//
//    cout << my_var(10) << endl; // ambiguous
    
    cout << a::my_var << endl;
    cout << b::my_var << endl;
    
    {
        using namespace a;
        cout << my_var << endl;
    }
    
    {
        using namespace b;
        cout << my_var << endl;
    }


    return 0;
}
