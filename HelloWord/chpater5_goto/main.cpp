//
//  main.cpp
//  chpater5_goto
//
//  Created by 문지원 on 10/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cmath>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    double x;

tryAgain :
    cout << "Enter " << endl;
    cin >> x;
    
    if(x<0.0)
        goto tryAgain;
    
    cout << sqrt(x) << endl;
    
    return 0;
}
