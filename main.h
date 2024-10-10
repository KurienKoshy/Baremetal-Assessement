#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>

// Structure for 3-component vector
typedef struct
{
    float i;
    float j;
    float k;
} Vector;

typedef struct {
    float s;  // Scalar component
    Vector v; // Vector component (i, j, k)
} Quaternion;


// Function to perform vector addition
Vector add_vector(Vector v1, Vector v2);

// Function to perform dot product of two vectors
float dot_Product(Vector v1, Vector v2);

// Function to perform cross product of two vectors
Vector cross_Product(Vector v1, Vector v2);

// Function to scale a vector
Vector scalar_multiplication(Vector v, float scalar);

// Function to initialize a quaternion
Quaternion quat(float s, float i, float j, float k);

// Function to compute the conjugate (complement) of a quaternion
Quaternion complement_quat(Quaternion q);

// Function to multiply two quaternions
Quaternion mult_quat(Quaternion q1, Quaternion q2);

// Function to compute the dot product of two quaternions
float dot_quat(Quaternion q1, Quaternion q2);
#endif
