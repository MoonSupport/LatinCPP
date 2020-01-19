//
//  Header.h
//  HelloWord
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#ifndef Header_h
#define Header_h

#include <iostream>

class Cal{
    private :
        int _init;
    
    public :
    Cal(int init);
    
    Cal add(int value);
    
    Cal sub(int value);
    
    Cal mul(int value);
    
    void print();
    
};

//Cal Cal::add(int value) {
//
//    _init += value;
//
//    return *this;
//}

#endif /* Header_h */
