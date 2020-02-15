//
//  main.cpp
//  try_catch_throw
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cmath>
#include <string>
using namespace std;


int main(int argc, const char * argv[]) {
    
    double x;
    cin >> x;
    
    try{
        if(x < 0.0) throw string("Error");
        
        cout << sqrt(x) << endl;
    }catch(string e) {
        cout << e << endl;
    }
    
    
    return 0;
}
