//
//  main.cpp
//  parenthesis
//
//  Created by 문지원 on 28/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

class Accumulator {
    private :
    int m_counter = 0;
    
    public :
    int operator()(int i) {
        return (m_counter +=i);
    }
};

int main(int argc, const char * argv[]) {
    
    Accumulator acc;
    
    cout << acc(10) << endl;
    cout << acc(20) << endl;
    
    return 0;
}
