//
//  main.cpp
//  InitializerList
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Something{
    private :
    int _i;
    double _d;
    char _c;
    
    public :
    Something()
        :_i(1), _d(3.14), _c('a')
    {
        _i *=3;
        _d *=3;
        _c +=3;
    }
    
    void print(){
        cout << _i << " " << _d << " " << _c << endl;
    };
};

int main(int argc, const char * argv[]) {
    Something some;
    some.print();
    cout << &some << endl;
    
    Something* dynamicSome = new Something();
//    cout >> dynamicSome << endl;
    some.print();
    return 0;
}
