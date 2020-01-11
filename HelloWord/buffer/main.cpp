//
//  main.cpp
//  buffer
//
//  Created by 문지원 on 11/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <stdio.h>
#include <time.h>

using namespace std;

//int getInt(){
//    cout << "Enter Int" << endl;
//    int x;
//    cin >> x;
//    cin.ignore(32767, '\n');
//    return x;
//}
//
//char getOperator(){
//    cout << "Enter Operator" << endl;
//    char x;
//    cin >> x;
////    cin.ignore(32767, '\n');
//    return x;
//}
//
//
//int main(int argc, const char * argv[]) {
//
//    while(true){
//    cout << getInt() << endl ;
//    cout << getOperator() << endl ;
//    }
//
//    return 0;
//}




void delay(unsigned int sec)     // 특정 시간(초)만큼 기다리는 함수
{
    clock_t ticks1 = clock();
    clock_t ticks2 = ticks1;
    while ((ticks2 / CLOCKS_PER_SEC - ticks1 / CLOCKS_PER_SEC) < (clock_t)sec)
        ticks2 = clock();
}


int main()
{
    setvbuf(stdout, NULL, _IOFBF, 10);    // 출력 버퍼의 크기를 10으로 설정

    printf("Hello, world!\n");
//    fflush(stdout);    // 표준 출력의 출력 버퍼를 강제로 비움

    delay(3);    // 3초간 기다림

    return 0;
}
