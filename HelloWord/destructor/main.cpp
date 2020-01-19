//
//  main.cpp
//  destructor
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class IntArray{
private:
    int *m_arr = nullptr;
    int m_length = 0;
    
public:
    IntArray(const int lenth_in){
        m_length = lenth_in;
        m_arr = new int[m_length];
        
        cout << "Constructor" << endl;
    }
    
    int size() {
        return m_length;
    }
    
    ~IntArray(){ // 스코프 밖으로 벗어나면 알아서 실행
        if(m_arr != nullptr) delete []m_arr; // 가비지 제거
    }
};

int main(int argc, const char * argv[]) {
    while(true){
        IntArray my_int_arr(10000); // memory leak;
    }
    
    return 0;
}
