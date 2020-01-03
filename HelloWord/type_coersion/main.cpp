//
//  main.cpp
//  type_coersion
//
//  Created by 문지원 on 03/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <typeinfo>
#include <iomanip>


int main(int argc, const char * argv[]) {
    using namespace std;
    
    int a = 123.0;
    cout << typeid(a).name() << endl;
    
    float aa = 1.0f;
    double dd = a; //promotion -> 메모리가 작은 곳에서 큰 곳으로 이동
    
    cout << static_cast<float>(dd) << endl;
    
    //conversion -> 메모리가 큰 곳에서 작은곳으로 이동 --> 문제 발생 할 수 있음
    int i = 30000;
    char c = i;
    
    cout << static_cast<int>(c) << endl;
    
    // 정밀도 문제 역시 발생할 수 있음
    double d = 0.123456789;
    float f = d;
    
    cout << setprecision(12)<< d<< endl << f << endl;
    
    //unsigned 형변환 에러
    cout << 5u - 10 << endl;

    return 0;
}
