//
//  main.cpp
//  returning_pointer
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int* allocateMemoery(int size) { // 메모리를 할당한다... 말그대로 ...
    return new int[size];
}

int& adressMemoery(int x) {
    int value =  x * 2;
    return value;
}

int main(int argc, const char * argv[]) {

    int *array = allocateMemoery(1024);
    
    int &value = adressMemoery(5); // 해당 함수는 주소를 리턴하는데, 함수 스코프를 벗어나면 그 값은 소실 되잖?
    cout << value << endl;
    cout << value << endl; // 그래서 이쯤 되는 타이밍에서 주소 자체가 소실되고 가비지 값이 출력되는 불상사가 생김
    cout << value << endl;
    
    
    return 0;
}
