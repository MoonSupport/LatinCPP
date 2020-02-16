//
//  main.cpp
//  stdexception
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <exception>
#include <string>

using namespace std;

int main(int argc, const char * argv[]) {
    try{
        string s;
        s.resize(-1);
        
    }catch(length_error& exception){
        cerr << "LEngthError" << endl;
        
    }
    catch(exception& exception) {
        
        cout << typeid(exception).name() <<endl;
        cerr << exception.what() << endl;
    }
    return 0;
}
