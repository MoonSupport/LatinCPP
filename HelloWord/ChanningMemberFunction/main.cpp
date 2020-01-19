//
//  main.cpp
//  ChanningMemberFunction
//
//  Created by 문지원 on 19/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;

class Simple{
    private:
        int _id;
    
    public:
        Simple(int id){
            setID(id);
            this->setID(id);
            (*this).setID(id);
            
            //셋은 동일함
            // 결국 this의 포인터(디레퍼런싱) 함수들을 실행 시키는것
            
            cout << this << endl;
        }

        void setID(int id) {
            _id = id;
        }

        int getID(){
            return _id;
        };
};



int main(int argc, const char * argv[]) {
    Simple simple1(1), simple2(2);
    simple1.setID(2);
    simple2.setID(4);
    
    //위는 사실 다음과 같이 작동 된다.
    
    //Simple::setID(&simple1, 2)
    // 이것의 첫번째 파라미터인 simple1의 주소값이 this로 쓰이는 것리다.
    
    cout << &simple1 << " " << &simple2 << endl;

    return 0;
}
