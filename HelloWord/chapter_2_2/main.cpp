//
//  main.cpp
//  chapter_2_2
//
//  Created by 문지원 on 29/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <limits>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    cout << sizeof(short) << endl;
    cout << sizeof(int) << endl;
    cout << sizeof(long) << endl;
    cout << sizeof(long long) << endl;

    cout << std::numeric_limits<short>::max() << endl;
    cout << std::numeric_limits<short>::min() << endl;

    
    return 0;
}
