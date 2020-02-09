//
//  main.cpp
//  template
//
//  Created by 문지원 on 09/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template<>
char getMax(char x, char y) {
    std::cout << "Warning : compareing" << std::endl;
    
    return (x > y) ? x : y;
}

int main(int argc, const char * argv[]) {
    
    std::cout << getMax(1,2) << std::endl;
    std::cout << getMax(3.14,2.24) << std::endl;
    std::cout << getMax('a','c') << std::endl;
    
    return 0;
}
