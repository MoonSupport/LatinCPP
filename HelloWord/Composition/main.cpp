//
//  main.cpp
//  Composition
//
//  Created by 문지원 on 01/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include "Monster.h"
using namespace std;

int main(int argc, const char * argv[]) {
    
    Monster monster1("Sanson", 0, 0);
    
    monster1.moveTo(1, 1);
    cout << monster1 << endl;
    
    return 0;
}
