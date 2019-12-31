//
//  main.cpp
//  bitflags
//
//  Created by 문지원 on 31/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <bitset>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    const unsigned char opt0 = 1 << 0;
    const unsigned char opt1 = 1 << 1;
    const unsigned char opt2 = 1 << 2;
    const unsigned char opt3 = 1 << 3;

    
    cout << bitset<8>(opt0) << endl;
    cout << bitset<8>(opt1) << endl;
    cout << bitset<8>(opt2) << endl;
    cout << bitset<8>(opt3) << endl;

    
    unsigned char items_flags = 0;
    
    cout << "No Item" <<bitset<8>(items_flags) << endl;
    
    // item0 on
    items_flags  |= opt0;
    
    cout << "Item0 obtained\t" << bitset<8>(items_flags) << endl;
    
    // item3 on
    items_flags  |= opt3;
    
    cout << "Item3 obtained\t" << bitset<8>(items_flags) << endl;
    
    // item3 off
    items_flags  &= ~opt3;
    
    cout << "Item3 lost\t"  << bitset<8>(items_flags) << endl;
    
    // has item1 ?
    
    if(items_flags & opt1){
        cout << "Has item1" << endl;
    }
    
    if(items_flags & opt0){
        cout << "Has item0" << endl;
    }
    
    
    // obtain item 2, 3
    items_flags |= (opt2 | opt3);
    
    cout << bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained" << bitset<8>(items_flags) << endl;
    
    if((items_flags & opt2) && !(items_flags & opt1)){
        items_flags ^= opt2; // 바꿔주는 기능     XOR
        items_flags ^= opt1;
        cout << "drop item2 and get item1" << endl;
    }
    
    cout << bitset<8>(items_flags) << endl;
    
    return 0;
}
