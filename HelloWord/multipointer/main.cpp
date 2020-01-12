//
//  main.cpp
//  multipointer
//
//  Created by 문지원 on 12/01/2020.
//  Copyright © 2020 문지원. All rights reserved.
//

#include <iostream>

using namespace std;

int main(int argc, const char * argv[]) {
    
    const int row = 3;
    const int col = 5;
    
    const int arr[row][col] =
    {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15}
    };
    int **matrix = new int*[row];
    
    for(int r=0; r < row; ++r)
        matrix[r] = new int[col];

    
    int *r1 = new int[col] {1,2,3,4,5};
    int *r2 = new int[col]  {6,7,8,9,10};
    int *r3 = new int[col] {11,12,13,14,15};

    
    for(int r=0; r < row; ++r){
        for(int c =0; c < col; ++c){
            matrix[r][c] = arr[r][c];
            cout << matrix[r][c] << " ";
        }
        cout << endl;
    }
    
    for(int r=0; r < row; ++r)
        delete[] matrix[r];

    delete[] matrix;
    
    return 0;
}
