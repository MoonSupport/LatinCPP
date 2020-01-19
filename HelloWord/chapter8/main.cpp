//
//  main.cpp
//  chapter8
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <string>

class Human {
    public : // 기본은 private
        std::string name;
        int age;
        
        void print(){
        std::cout << name << age << std::endl;
        };
};

struct Date{
    int month;
    int day;
};

int main(int argc, const char * argv[]) {
    
    Human me{
        "Moon",24
    };
    
    me.print();
    
    Date today;
    today.month = 1;
    today.day = 1;
    std::cout << today.month << std::endl;
    std::cout << today.day << std::endl;

    return 0;
}
