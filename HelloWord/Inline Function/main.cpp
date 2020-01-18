//
//  main.cpp
//  Inline Function
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

inline int min(int x, int y){
    return x>y ? y: x;
}

int main(int argc, const char * argv[]) {
    
    cout << min(5,6) << endl;
    cout << min(3,2) << endl;
    
    cout << (5 > 6 ?  6 : 5) << endl;
    cout << (3 > 2 ?  2 : 3) << endl;
    
    //인라인 함수를 만들면 위와 아래가 동일해진다 --> 성능이 좋아질수도 있다.
    
    return 0;
}
