//
//  main.cpp
//  scopedEnumerations
//
//  Created by 문지원 on 04/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

enum Color
{
    RED,
    BLUE
};

enum Fruit
{
    BANANA,
    APPLE,
};

enum class C_Color
{
    RED,
    BLUE
};

enum class C_Fruit
{
    BANANA,
    APPLE,
};

int main(int argc, const char * argv[]) {
    using namespace std;
    
    Color red = RED;
    Fruit banana = BANANA;
    
    C_Color c_red = C_Color::RED;
    C_Fruit c_banana = C_Fruit::BANANA;
    
    if(red == banana)
    {
        cout << "WHAT THE EQUAL";
    }
    
//    if(c_red == c_banana) // 다른 타입이기 때문에 비교 불가능!!
//    {
//        cout << "WHAT THE EQUAL";
//    }
    
    return 0;
}
