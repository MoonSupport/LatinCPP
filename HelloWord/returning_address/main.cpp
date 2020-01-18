//
//  main.cpp
//  returning_address
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <array>

using namespace std;

int& get(array<int, 100>& value, int locate) {
    return value[locate];
}

int main(int argc, const char * argv[]) {
    
    array<int, 100> my_array;
    my_array[30] = 10; // 메모리가 잡혀있다면
    
    get(my_array, 30) = 1024; // 메모리를 리턴한 것을 사용하더라도 문제 없띠
    
    cout << my_array[30] << endl;
    
    return 0;
}
