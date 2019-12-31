//
//  main.cpp
//  chapter_binary
//
//  Created by 문지원 on 31/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <bitset> // Decimal -> Binary로 Print해주는 것

int main(int argc, const char * argv[]) {
    using namespace std;
    unsigned int a = 21;
    
    cout << bitset<8>(a) << " " << a << endl;
    
    unsigned int b = a << 1;
    cout << bitset<8>(b) << " " << b <<  endl;
    
    unsigned int c = a << 2;
    cout << bitset<8>(c) << " " << c <<  endl;
    
    
    unsigned int d = a << 3;
    cout << bitset<8>(d) << " " << d <<  endl;
    
    
    unsigned int e = a << 4;
    cout << bitset<8>(e) << " " << e <<  endl;
    
    unsigned int f = a >> 1;
    cout << bitset<8>(f) << " " << f <<  endl;
    
    unsigned int g = a >> 2;
    cout << bitset<8>(g) << " " << g <<  endl;
    
    unsigned int aa = 0b1100;
    unsigned int bb = 0b0110;
    
    cout << bitset<4>(aa&bb) << endl;
    cout << bitset<4>(aa|bb) << endl;
    cout << bitset<4>(aa^bb) << endl;


    
    
    return 0;
}
