//
//  main.cpp
//  PartialSpecialization
//
//  Created by 문지원 on 10/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

template<class T, int size>
class StaticArray{
private:
    T m_array[size];
    

public:
    T* getArray() {return m_array;}

    T& operator[](int index) {
        return m_array[index];
    }
};

template<typename T, int size>
void print(StaticArray<T, size> &array) {
    for(int i=0 ; i<size ; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
}

template<int size>
void print(StaticArray<char, size> &array) {
    for(int i=0 ; i<size ; ++i) {
        cout << array[i] ;
    }
    cout << endl;
}


int main(int argc, const char * argv[]) {
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;
    
    print(int4);
    
    StaticArray<char, 4> char4;
    char4[0] = 'g';
    char4[1] = 'o';
    char4[2] = 'o';
    char4[3] = 'd';
    
    print(char4);

    
    return 0;
}
