//
//  main.cpp
//  CTSpecialization_2
//
//  Created by 문지원 on 09/02/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

template <class T>
class Storage8
{
private:
    T m_array[8];
    
public:
    void set(int index, const T& value) {
        m_array[index] = value;
    }
    
    const T& get(int index) {
        return m_array[index];
    }
    
};

template<>
class Storage8<bool>
{
private:
    unsigned char m_data;
    
public:
    Storage8() : m_data(0){
        
    }
    
    void set(int index, bool value) {
        unsigned char mask = 1 << index;
        
        if (value) m_data |= mask;
        else m_data &= ~mask;
    }
    
    bool get(int index){
        unsigned char mask = 1 << index;
        return (m_data & mask) != 0;
    }
    
    
};

#include <iostream>

int main(int argc, const char * argv[]) {
    Storage8<int> intStorage;
    
    for (int count = 0; count < 8; ++count) {
        intStorage.set(count, count);
    }
    
    for (int count = 0; count < 8; ++count) {
        std::cout << intStorage.get(count) << '\n';
    }
    
    std::cout << "SIZE Storage8<int> " << sizeof(Storage8<int>) << std::endl;
    
    Storage8<bool> boolStorage;
    
    for (int count = 0; count < 8; ++count) {
        boolStorage.set(count, count);
    }
    
    for (int count = 0; count < 8; ++count) {
        std::cout << boolStorage.get(count) << '\n';
    }
    
    std::cout << "SIZE Storage8<bool> " << sizeof(Storage8<bool>) << std::endl;
    
    
    
    return 0;
}
