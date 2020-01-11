//
//  main.cpp
//  chapter_6_array
//
//  Created by 문지원 on 11/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

void printSomething(int arr[3]){
    cout << "arr: " << arr << endl;
    cout << "arr_pointer: " << &arr << endl;
    cout << "arr[0]: " << arr[0] << endl;
    cout << "arr[1]: " << &arr[1] << endl;
    cout << "arr[2]: " << &arr[2] << endl;
}

int main(int argc, const char * argv[]) {
    
    int arr[3] = {1,2,3};
    
    cout << "arr: " << arr << endl;
    cout << "arr_pointer: " << &arr << endl;
    cout << "arr[0]: " << &arr[0] << endl;
    cout << "arr[1]: " << &arr[1] << endl;
    cout << "arr[2]: " << &arr[2] << endl;
    
     printSomething(arr);

    return 0;
}
