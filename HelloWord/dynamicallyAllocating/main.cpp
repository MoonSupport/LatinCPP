//
//  main.cpp
//  dynamicallyAllocating
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    using namespace std;
    
    int length;
    cin >> length;
    
    int *array = new int[length]{11,22,33,44,55};
//    int *array = new int[length]();
    
    array[0] = 1;
    array[1] = 3;
    
    for(int i =0; i < length; ++i) {
        cout << (uintptr_t)&array[i] << endl;
        cout << array[i] <<endl;
    }
    
    delete [] array;
    
    int value1 = 5;
    const int* ptr = &value1; // 5의 주소값은 상수
    
    int value2 = 6;
    ptr = &value2; // 5의 주소값을 6의 주소값으로 변경은 가능
//    *ptr = value2; // 5의 주소에 있는 값은 변경 불가능.    -> 결국 주소에 있는 값에 const 함
    
    
    int value3 = 5;
    int *const ptr2 = &value3;
    
    *ptr2 = 10;
    cout << *ptr << endl;
    
    int value4 = 8;
    
//    ptr2 = &value4 // 주소 변경이 불가능 ***** 진정한 포인터 상수는 *const와 같이 선언됨을 확인 할 수 있음
    
    
    return 0;
}
