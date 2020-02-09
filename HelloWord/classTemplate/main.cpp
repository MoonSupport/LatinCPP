//
//  main.cpp
//  classTemplate
//
//  Created by 문지원 on 09/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

template<typename T>
class MyArray
{
    private :
    T m_length;
    T* m_data;
    
public:
    MyArray(){
        m_length = 0;
        m_data = nullptr;
    }
    
    MyArray(T length) {
        m_data = new T[length];
        m_length = length;
        
    }
    
    ~MyArray() {
        reset();
    }
    
    void reset() {
        delete[] m_data;
        m_data = nullptr;
        m_length = 0;
    }

    T& operator[](T index) {
        return m_data[index];
    }

    T getLength() {
        return m_length;
    }
    
    void print() {
        for(T i=0; i<m_length; ++i) {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main(int argc, const char * argv[]) {
    MyArray<int> myarray(10);
    
    for (int i=0; i < myarray.getLength(); ++i) {
        myarray[i] = i * 10;
    }
    
    myarray.print();
    
    return 0;
}
