//
//  main.cpp
//  ChanningMemeberFunction2
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Cal{
    private :
        int _init;
    
    public :
        Cal(int init){
            _init = init;
        }
        
    Cal add(int value) {
        
        _init += value;
        
        return *this;
    }
    
    Cal sub(int value) {
        
        _init -= value;
        
        return *this;
    }
    
    Cal mul(int value) {
        
        _init *= value;
        
        return *this;
    }
    
    void print(){
        cout << _init << endl;
    }
    
};

int main(int argc, const char * argv[]) {
    Cal cal(1);
    cal.add(10).sub(5).mul(2).print();
    
    Cal cal2(1);
    Cal temp1 = cal2.add(10);
    Cal temp2 = temp1.sub(5);
    Cal temp3 = temp2.mul(2);
    temp3.print();


    
    return 0;
}
