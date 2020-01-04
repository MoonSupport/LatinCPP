//
//  main.cpp
//  TypeAliases
//
//  Created by 문지원 on 04/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <vector>
#include <cstdint>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    typedef double distance_t;
    
    double my_distance;
    distance_t home2work; // 위나 아래나 같다.
    distance_t home2school;
    
    
    int8_t i(97); // 와 같은 역할을 alias가 한다.
    
    vector<pair<string, int>> pairlist1; // bracet를 덕지덕지 써도 결국 자료형인거고, 자료형 안에 자료형을 잡아넣는 것일 뿐이다.
    vector<pair<string, int>> pairlist2;
    
    typedef vector<pair<string, int>> pairlist;
    
    pairlist pairlist3;
    pairlist pairlist4;

    using pairlist_2 = vector<pair<string, int>>;
    
    pairlist_2 pairlist5;
    pairlist_2 pairlist6;

    
    
    
    return 0;
}
