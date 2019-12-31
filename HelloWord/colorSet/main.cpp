//
//  main.cpp
//  colorSet
//
//  Created by 문지원 on 31/12/2019.
//  Copyright © 2019 문지원. All rights reserved.
//

#include <iostream>
#include <bitset>

int main(int argc, const char * argv[]) {
    using namespace std;

    const unsigned int red_mask = 0xFF0000;
    cout << std::bitset<32>(red_mask) << endl;

    const unsigned int green_mask = 0x00FF00;
    cout << std::bitset<32>(green_mask) << endl;

    const unsigned int blue_mask = 0x0000FF;
    cout << std::bitset<32>(blue_mask) << endl;
    
    // (218,165,32)
    unsigned int pixel_color = 0xDAA520;
    
    cout << std::bitset<32>(pixel_color) << endl;
    
    unsigned char red = (pixel_color & red_mask) >> 16;
       
       cout << "red" << bitset<32>(red) << " " << int(red) << endl;
    
    unsigned char green = (pixel_color & green_mask) >> 8;
       
       cout << "green" << bitset<32>(green) << " " << int(green) << endl;
    
    unsigned char blue = pixel_color & blue_mask;
    
    cout << "blue" << bitset<32>(blue) << " " << int(blue) << endl;
    
    
    
    return 0;
}
