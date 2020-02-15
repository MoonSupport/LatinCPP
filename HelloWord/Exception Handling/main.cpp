//
//  main.cpp
//  Exception Handling
//
//  Created by 문지원 on 15/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

#include <fstream>
#include <string>

using namespace std;

unsigned long findFirstChar(const char* string, char ch) {
    for(std::size_t index=0; index < strlen(string); ++index) {
        if(string[index] == ch) return index;
    }
    return -1;
}

double divide(int x, int y, bool &success) {
    if(y ==0) {
        success = false;
        return 0.0;
    }
    
    success = true;
    return static_cast<double>(x);
};

int main(int argc, const char * argv[]) {
    bool succes;
    double result = divide(5, 0, succes);
    
    if(!succes) {
        cerr << "An error occurred" << endl;
        
    }else{
        cout << "REsult is" << result <<endl;
    }
    
    ifstream input_file("temp.txt");
    if(!input_file) {
        cerr << "cannot open file" << endl;
    }
    
    return 0;
}
