#include"main.h"
// Function to intialize the quaternion
Quaternion quat(float s, float i, float j ,float k)
{
	Quaternion q;
	q.s = s;
	q.v.i = i;
	q.v.j = j;
	q.v.k = k;
	return q;

}
// Function to find complement 
Quaternion complement_quat(Quaternion q)
{
	q.s = q.s;
	q.v.i = -1 * q.v.i;
	q.v.j = -1 * q.v.j;
	q.v.k = -1 * q.v.k;
	return q;
}

// Function to multiply two quaternions
/*
Suppose:
q1 = 1,2,3,4(s1,i1, j1,k1) and q2 = 0,1,1,1(s2,i2,j2,k2);
result(s3, i3, j3, k3)

Scalar part:
s3 =  s1×s2 − i1×i2 − j1×j2 − k1×k2
Vector part:
i3 = s1×i2 + i1×s2 + j1×k2 − k1×j2
j3 = s1×j2 + j1×s2 + k1×i2 − i1×k2
k3 = s1×k2 + k1×s2 + i1×j2 − j1×i2
 */
Quaternion mult_quat(Quaternion q1, Quaternion q2)
{
	Quaternion result;
	result.s = q1.s * q2.s - dot_Product(q1.v, q2.v);
	result.v = add_vector(add_vector(scalar_multiplication(q2.v, q1.s), scalar_multiplication(q1.v, q2.s)), cross_Product(q1.v, q2.v));
	return result;
}

// Function to find  dot product of two quaternions
float dot_quat(Quaternion q1, Quaternion q2) 
{
	return q1.s * q2.s + dot_Product(q1.v, q2.v);
}

