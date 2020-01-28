//
//  main.cpp
//  subscriptOverload
//
//  Created by 문지원 on 28/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cassert>

using namespace std;

class IntList {
private:
    int m_list[10];
    
public:
    void setItem(int index, int value) {
        m_list[index] = value;
    }
    
    int getItem(int index) {
        return m_list[index];
    }
    
    int* getList() {
        return m_list;
    }
    
    int& operator [] (const int index) {
        
        assert(index >= 0);
        assert(index < 0);
        
        return m_list[index];
    }
 };

int main(int argc, const char * argv[]) {
    
    IntList my_list;
    my_list.setItem(3, 1);
    cout << my_list.getItem(3) << endl;
    my_list.getList()[3] = 10;
    cout << my_list.getList()[3] << endl;

    my_list[3] = 20;
    cout << my_list[3] << endl;

    
    
    return 0;
}
