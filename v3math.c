// Header Files
#include <stdio.h>
#include "v3math.h"

// Function Name: v3_from_points
// Function Purpose: Calculate v3 vector from two 3 dimensional vectors
void v3_from_points(float *dst, float *a, float *b)
{

	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] = b[index] - a[index];
	}	

}

// Function Name: v3_add
// Function Purpose: Give sum
void v3_add(float *dst, float *a, float *b)
{
	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] = a[index] + b[index];
	}	

}

// Function Name: v3_subtract
// Function Purpose: Take difference
void v3_subtract(float *dst, float *a, float *b)
{

	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] = a[index] - b[index];
	}	

}

// Function Name: v3_dot_product
// Function Purpose: Calculate dot product
float v3_dot_product(float *a, float *b)
{
	int index = 0;

	float dot_product = 0.0;

	for(index = 0; index < 3; index++)
	{
		dot_product = dot_product + (a[index] * b[index]);
	}

	return dot_product;
}

// Function Name: v3_cross_product
// Function Purpose: Calculate cross product
void v3_cross_product(float *dst, float *a, float *b)
{
	// It is assumed that we will strictly be dealing with v3 vectors 
	// so indicies are reached using hard-coded integers
	dst[0] = (a[1] * b[2]) - (a[2] * b[1]);

	dst[1] = (a[2] * b[0]) - (a[0] * b[2]);

	dst[2] = (a[0] * b[1]) - (a[1] * b[0]);
}

// Function Name: v3_scale
// Function Purpose: Scales an input vector by s 
void v3_scale(float *dst, float s)
{
	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] =  s * (dst[index]);
	}

}

// Function Name: v3_angle
// Function Purpose: 
float v3_angle(float *a, float *b)
{
	float angleBetween = 0.0;

    return angleBetween; //stub
}

// Function Name: v3_angle_quick
// Function Purpose: 
float v3_angle_quick(float *a, float *b)
{
    return 0.0; //stub
}

// Function Name: v3_reflect
// Function Purpose: 
void v3_reflect(float *dst, float *v, float *n)
{

}

// Function Name: v3_length
// Function Purpose:
float v3_length(float *a)
{
	float index0Power = 0.0;

	float index1Power = 0.0;

	float index2Power = 0.0;

	index0Power = a[0] * a[0];

	index1Power = a[1] * a[1];

	index2Power = a[2] * a[2];

    return fabs(sqrt( index0Power + index1Power + index2Power )); //stub
}

// Function Name: v3_normalize
// Function Purpose: 
void v3_normalize(float *dst, float *a)
{

}