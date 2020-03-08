
#include <iostream>
#include <cmath>
#include "Vector3D.h"

using namespace std;

int main()
{
        Vector3D A(5, 2, -3);
        Vector3D B(8, 1, -4);

        cout << "Vector A*B : " << A.dotVector3D(B) << endl;
        cout << "Vector A magnitude: " << A.getMagnitude() << endl;
        cout << "Vector B mgaginute: " << B.getMagnitude() << endl;
        cout << "angle between two vectors: " << A.angleBetweenVector3Ds(B) << endl;
        
        Vector3D C = A.crossVector3D(B);
        C.normalizeVector3D();
        
        cout << "nomalized vector: " << C.x << "i " << C.y << "j " << C.z << "k" << endl;
        
        return 0;
}
