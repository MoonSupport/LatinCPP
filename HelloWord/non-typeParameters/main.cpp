//
//  main.cpp
//  non-typeParameters
//
//  Created by 문지원 on 09/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

//
//  main.cpp
//  classTemplate
//
//  Created by 문지원 on 09/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

template<typename T, unsigned int T_SIZE>
class MyArray
{
    private :
    T* m_data;
    
public:
    MyArray(){
        m_data = nullptr;
    }
    
    MyArray(T length) {
        m_data = new T[T_SIZE];        
    }
    
    ~MyArray() {
        reset();
    }
    
    void reset() {
        delete[] m_data;
        m_data = nullptr;
    }

    T& operator[](T index) {
        return m_data[index];
    }

    T getLength() {
        return T_SIZE;
    }
    
    void print() {
        for(T i=0; i<T_SIZE; ++i) {
            std::cout << m_data[i] << " ";
        }
        std::cout << std::endl;
    }
};



int main(int argc, const char * argv[]) {
    MyArray<int, 10> myarray;
    
    for (int i=0; i < myarray.getLength(); ++i) {
        myarray[i] = i * 10;
    }
    
    myarray.print();
    
    return 0;
}
