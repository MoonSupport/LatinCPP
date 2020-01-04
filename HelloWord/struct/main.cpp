//
//  main.cpp
//  struct
//
//  Created by 문지원 on 04/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;

enum SEX{
    male,
    female,
    none
};

struct Person
{
    double height; // member
    float weight; // member
    int age; // member
    string name;
    SEX sex;
};

struct SuperPerson
{
    double height;
    float weight;
    int age;
    string name;
    SEX sex;
    
    void printPerson() {
        cout << name << " " << age << endl;
    }
};

void printPerson(Person person) {
    cout << person.name << " " << person.age << endl;
}

int main(int argc, const char * argv[]) {
    
    Person me;
    me.weight = 100; // . = member selector operator
    me.age = 24;     // example ) me <- struct . <- member selector operator age <- member
    me.name = "하하";
    me.sex = none;
    
    Person mom{2.0,70.4,25,"히히",male};

    printPerson(mom);
    printPerson(me);
    
    SuperPerson you{40,24.5,1,"슈퍼펄슨",female};
    
    you.printPerson();
    
    return 0;
}
