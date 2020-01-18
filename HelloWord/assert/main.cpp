//
//  main.cpp
//  assert
//
//  Created by 문지원 on 18/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>
#include <cassert>

int main(int argc, const char * argv[]) {
    int a = 5;
        
    const int ix = 5;

    static_assert(ix >= 5, "5 이상이여야 함");
    static_assert(ix < 5, "5 미만이여야 함");

    return 0;
}
