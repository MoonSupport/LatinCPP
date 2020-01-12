//
//  main.cpp
//  array_char
//
//  Created by 문지원 on 11/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    char myString[] = "string"; // 공백이 하나 더 들어감
    
    for (int i =0; i < 7; i++) {
        cout << (int)myString[i] << endl;
    }
    
    cout << sizeof(myString) / sizeof(char) << endl;
    
    char myString2[255];
    
    cin >> myString2;
    
    myString2[4] = '\0';
    
    cout << myString2 << endl;
    
    return 0;
}
