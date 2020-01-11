//
//  main.cpp
//  random_generator
//
//  Created by 문지원 on 11/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <ctime>

unsigned int PRNG(){ // 컴터는 난수를 생성할 수 없다. 그래서 대신 예상치 못한 숫자를 만들어 내서 낸다.
                     // 대신 시드 넘버를 바꿔주며 그 수를 변경해준다. 그리고 그 숫자는 time(시간)에 따라 변동시킨다.
    static unsigned int seed = static_cast<unsigned int>(std::time(0));
    
    seed = 8253729 * seed + 2396403;
    
    return seed % 32768;
}

int main(int argc, const char * argv[]) {
    using namespace std;
    
    for(int count = 1; count <= 100; ++count) {
        
        cout << PRNG() << "\t";
        
        if(count % 5 == 0) cout << endl;
        
    }
    
    return 0;
}
