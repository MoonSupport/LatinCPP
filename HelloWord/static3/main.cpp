//
//  main.cpp
//  static3
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Something {
    public:
        class _init {
            public:
                _init() {
                    s_value = 1234;
                }
        };

    private :
    static int s_value;
    
    static _init s_initializer;
    
    public :
        
    static int getValue(){
        return s_value;
    }


};

int Something::s_value;
Something::_init Something::s_initializer;

int main(int argc, const char * argv[]) {
    
    cout << Something::getValue() << endl;

    return 0;
}
