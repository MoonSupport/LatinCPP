#ifndef _VECTOR3D_H_

#define _VECTOR3D_H_

#define PI 3.14159265

class Vector3D {
        
public:
        float x, y, z;
public:
        Vector3D(float ex = 0, float why = 0, float zee = 0) {
                x = ex, y = why, z = zee;
        }
        
        ~Vector3D() {}
        // 벡터의 크기를 반환하는 메소드
        float getMagnitude() {
                return sqrtf(x*x + y*y + z*z);
        }
        // 벡터의 스칼라 곱
        Vector3D operator*(float num) const {
                return Vector3D(x*num, y*num, z*num);
        }
        // 벡터의 합
        Vector3D operator+(const Vector3D &vec) const {
                return Vector3D(x + vec.x, y + vec.y, z + vec.z);
        }
        // 벡터의 차
        Vector3D operator-(const Vector3D &vec) const {
                return Vector3D(x - vec.x, y - vec.y, z - vec.z);
        }
        // 벡터의 정규화
        void normalizeVector3D(void) {
                float mag = sqrtf(x*x + y*y + z*z);
                x /= mag;
                y /= mag;
                z /= mag;
        }
        // 벡터의 내적
        float dotVector3D(const Vector3D &vec) const {
                return x*vec.x + y*vec.y + z*vec.z;
        }
        // 벡터의 외적
        Vector3D crossVector3D(const Vector3D &vec) const {
                return Vector3D(y*vec.z - z*vec.y, z*vec.x - x*vec.z, x*vec.y - y*vec.x);
        }
        // 내적을 이용해 두 벡터간의 각을 구함(단위: 도)
        float angleBetweenVector3Ds(Vector3D &vec)  {
                return (acos(dotVector3D(vec) / (getMagnitude() * vec.getMagnitude())) * (180 / PI));
        }
        
};

#endif
