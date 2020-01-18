//
//  main.cpp
//  chapter7_Funciton
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

void generalFunction(int a) {
    a = a + 1;
    
    cout << &a << endl; // a 는 계산후에 버려짐을 유추
}

void referenceFunction(int &a) {
    a = a + 1;
    
    cout << &a << endl; // a는 뭔가 변화 한다는 것을 유추

}

void adressFunction(int *a) {
    
    *a = *a + 1;
    
    
    cout << a << endl; // a는 뭔가 변화 한다는 것을 유추

}

int main(int argc, const char * argv[]) {
    int value = 1;
    
    cout << &value << endl;

    
    generalFunction(value);
    
    cout << value << endl;
    
    referenceFunction(value);
    
    cout << value << endl;
    
    adressFunction(&value);
    
    cout << value << endl;
    
    int* value2 = &value;
    
    adressFunction(value2);
    
    cout << *value2 << endl;

    
    return 0;
}
