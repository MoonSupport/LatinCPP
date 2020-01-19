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
        Human(const std::string& name = "ME", const int& age = 100){
            _name = name;
            _age = age;
        }
        std::string _name;
        int _age;
        
        void print(){
        std::cout << _name << _age << std::endl;
        };
};

struct Date{
    int month;
    int day;
};


int main(int argc, const char * argv[]) {
    
    Human me;
    Human ji("jiwon",24);
    Human obj{
        "obj", 20
    };
    me.print();
    ji.print();
    obj.print();
    return 0;
}
