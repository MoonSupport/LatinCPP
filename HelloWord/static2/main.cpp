//
//  main.cpp
//  static
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Something{
public:
    
    int m_value = 1;
    
    static int getValue(){
        return sm_value; // 스태틱함수는 this를 사용할 수 없다. static이 아닌 맴버도 접근 할 수 없다.
                        // 정적이지 않은 모든 것들을 사용 할 수 없다.
    }
    
    int temp() {
        return this->sm_value + this-> m_value;
    }
    
private:
    static int sm_value;
};

int Something::sm_value = 1000; // static은 클래스 안에서 이니셜라이즈 할 수 없다.

int main(int argc, const char * argv[]) {
    Something st1;
    
    cout << Something::getValue() << endl;
    
    cout << st1.getValue() << endl;
    
    int (Something::*fp1)() = &Something::temp;
    //Something 함수의 포인터
    
    cout << (st1.*fp1)() << endl;
    
    int (*fp2)() = &Something::getValue;
    //Something 함수의 포인터
    
    cout << (fp2)() << endl;


    return 0;
}
