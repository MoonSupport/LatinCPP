//
//  main.cpp
//  static
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

int generateID() {
    static int s_id = 0; // 함수에서의 static은 마치 global scope에 있는 것 처럼 scope 밖으로 나갈 때
    // 메모리를 반환하지 않는다.
    return ++s_id;
}

class Something{
public:
    int m_value = 1;
    static int sm_value;
    static const int scm_value = 1; // static const는 여기서밖에 이니셜라이즈 할 수 없겠징?

};

int Something::sm_value = 1; // static은 클래스 안에서 이니셜라이즈 할 수 없다.

int main(int argc, const char * argv[]) {
    cout << generateID() << endl;
    cout << generateID() << endl;
    cout << generateID() << endl;
    
    Something st1;
    Something st2;
    
    st1.m_value = 2 ;
    st1.sm_value = 2;
    
    cout << &st1.m_value << " " << st1.m_value << endl;
    cout << &st2.m_value << " " << st2.m_value << endl;
    
    cout << &st1.sm_value << " " << st1.sm_value << endl;
    cout << &st2.sm_value << " " << st2.sm_value << endl;
    cout << &Something::sm_value << " " << Something::sm_value << endl;



    return 0;
}
