//
//  main.cpp
//  dangerousException
//
//  Created by 문지원 on 16/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <memory>

using namespace std;

int main(int argc, const char * argv[]) {
    
    try{
        int* i = new int[10000000];
        unique_ptr<int> up_i(i);
        
        throw 'error'; // 에러를 타서 delete 못해주는 경우를 스마트 포인터로 방지
    }catch(char& e) {
        cout << e << endl;
    }
    
    
    
    return 0;
}
