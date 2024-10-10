
#include"main.h"

// Function for addition
Vector add_vector(Vector v1, Vector v2)
{
    Vector result;
    result.i = v1.i + v2.i;
    result.j = v1.j + v2.j;
    result.k = v1.k + v2.k;
    return result;
}

// Function to find dot product
float dot_Product(Vector v1, Vector v2)
{
    return (v1.i * v2.i) + (v1.j * v2.j) + (v1.k * v2.k);
}

// Function to find cross product
Vector cross_Product(Vector v1, Vector v2)
{
    Vector result;
    result.i = v1.j * v2.k - v1.k * v2.j;
    result.j = v1.k * v2.i - v1.i * v2.k;
    result.k = v1.i * v2.j - v1.j * v2.i;
    return result;
}

// Function to scale a vector
Vector scalar_multiplication(Vector v, float scalar)
{
    Vector result;
    result.i = v.i * scalar;
    result.j = v.j * scalar;
    result.k = v.k * scalar;
    return result;
}

