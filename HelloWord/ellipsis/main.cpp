//
//  main.cpp
//  ellipsis
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cstdarg>
using namespace std;

double findAverage(int count, ...) {
    double sum = 0;
    
    va_list list;
    
    va_start(list, count);
    
    for (int arg= 0; arg < count; ++arg) {
                
        sum += va_arg(list, int);
    }
    
    va_end(list);
    
    return sum / count;
}


int main(int argc, const char * argv[]) {
    
    cout << findAverage(1,2,3,21,1, "hello", 'c') << endl;
    cout << findAverage(2,2,3,21,1, "hello", 'c') << endl;
    cout << findAverage(3,2,3,21,1, "hello", 'c') << endl;
    cout << findAverage(5,2,3,21,1, "hello", 'c') << endl;
    cout << findAverage(10,2,3,21,1, "hello", 'c') << endl;


    
    return 0;
}
