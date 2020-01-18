//
//  main.cpp
//  function overloading
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int add(int x, int y) { //리턴값으로 구분할 수 없고, 파라미터로 구분한다.
    return x+y;
}

double add(double x, double y) {
    return x+y;
}

int main(int argc, const char * argv[]) {
    
    cout << add(1,2) << endl;
    cout << add(1.2,2.3) << endl;
    
    return 0;
}
