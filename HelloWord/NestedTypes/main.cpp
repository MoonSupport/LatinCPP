//
//  main.cpp
//  NestedTypes
//
//  Created by 문지원 on 24/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
using namespace std;


class Fruit {
    
    
    

    public :
    
    enum FruitType {
        APPLE, BANANA, CHERRY
    };
    
    
    Fruit(FruitType type) : m_type(type){
        
    }
    
    enum class FruitType2 {
        APPLE, BANANA, CHERRY
    };
    
    class Fruit2 {
        
    };
    
    struct Fruit3 {
        
    };
    

    FruitType getType() {
        return m_type;
    }
    
    private :
    
    FruitType m_type;
    
};

int main(int argc, const char * argv[]) {
    Fruit apple(Fruit::APPLE);
    
    if(apple.getType() == Fruit::APPLE) {
        cout << "APPLE" << endl;
    }
    
    
    return 0;
}
