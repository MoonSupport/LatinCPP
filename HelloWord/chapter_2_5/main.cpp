//
//  main.cpp
//  chapter_2_5
//
//  Created by 문지원 on 29/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include <limits>
#include <arpa/inet.h>
#include <sys/socket.h>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    float f(3.141592f);
    double d(3.141592);
    long double ld(3.141592);
    
    cout << 3.14 << endl;
    cout << 31.4e-1 << endl;
    cout << 31.4e-2 << endl;
    cout << 31.4e1 << endl;
    cout << 31.4e2 << endl<<endl;
    
    cout << std::setprecision(2);
    cout << 1.0 / 3.0 << endl;
    cout << 1.0 / 3.0 << endl;


    cout << sizeof(float) << endl;
    cout << sizeof(double) << endl;
    cout << sizeof(long double) << endl<<endl;
    
    cout << numeric_limits<float>::max() << endl;
    cout << numeric_limits<double>::max() << endl;
    cout << numeric_limits<long double>::max() << endl<<endl;

    cout << numeric_limits<float>::min() << endl;
    cout << numeric_limits<double>::min() << endl;
    cout << numeric_limits<long double>::min() << endl<<endl;
    
    cout << numeric_limits<float>::lowest() << endl;
    cout << numeric_limits<double>::lowest() << endl;
    cout << numeric_limits<long double>::lowest() << endl<<endl;
    
    return 0;
}
