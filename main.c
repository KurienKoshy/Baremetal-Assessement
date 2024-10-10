#include "main.h"
int main()
{
	//Creating a quaternion and calling the quat function to intialize the variable
	Quaternion q = quat(0, 1, 1, 1);
	//   Quaternion q1 = quat(1, 2, 3, 4);

	//Calling function to find the complement of the quaternion
	Quaternion q_bar = complement_quat(q);

	// Multiply q and q_bar
	Quaternion a = mult_quat(q, q_bar);
	//Quaternion a = mult_quat(q1, q);

	//find the dot product
	float b = dot_quat(q, q_bar);


	printf("Multiplication of q and q_bar: (%g, %g,%g,%g)\n", a.s, a.v.i, a.v.j, a.v.k);

	printf("Dot of q and q_bar: %g\n", b);

	return 0;
}

