//
//  main.cpp
//  string
//
//  Created by 문지원 on 03/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <string>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    const string my_hello = "Hello, World!\n";
    const char my_strs[] = "Hello, World!\n";

    cout << my_hello << endl;
    cout << my_strs << endl;
    
    cout << "Your name :";
    string name;
//    cin >> name;
    getline(cin, name);
    
    cout << "Your age :";
    string age;
//    cin >> age;
    getline(cin, age);

    
    cout << name << " is " << age << endl;
    
    
    return 0;
}
