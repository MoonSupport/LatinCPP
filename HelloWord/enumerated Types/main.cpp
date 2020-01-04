//
//  main.cpp
//  enumerated Types
//
//  Created by 문지원 on 04/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <typeinfo>

enum Weapon
{
    SWORD,
    AXE,
    HAMMER
};

int computeDamage(int weapon_id)
{
    if (weapon_id == 1)
    {
        return 100;
    }
    
    if (weapon_id == 2)
    {
        return 200;
    }
    return 0;
    /// ...
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    Weapon my_weapon = AXE;
    
    cout << "hit : " << computeDamage(my_weapon) << endl;
    
    cout << computeDamage(SWORD) << endl;
    cout << computeDamage(AXE) << endl;
    cout << computeDamage(HAMMER) << endl;

    return 0;
}
