//
//  main.cpp
//  chapter_2_void
//
//  Created by 문지원 on 29/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    std::cout << "Hello, World!\n";
    
    void* my_void;
    
    int i = 123;
    float f = 123.456f;
    std::cout << my_void << std::endl;

    
    my_void = (void*)&i;
    std::cout << my_void << std::endl;

    my_void = (void*)&f;
    
    std::cout << my_void << std::endl;

    
    return 0;
}
