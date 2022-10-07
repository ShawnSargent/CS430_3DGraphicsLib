// Header Files
#include "v3math.h"

// Function Name: v3_from_points
// Function Purpose: 
void v3_from_points(float *dst, float *a, float *b)
{

}

// Function Name: v3_add
// Function Purpose: Give some
void v3_add(float *dst, float *a, float *b)
{
	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] = a[index] + b[index];
	}	

}

// Function Name: v3_subtract
// Function Purpose: Take some
void v3_subtract(float *dst, float *a, float *b)
{

	int index = 0;

	for(index = 0; index < 3; index++)
	{
		dst[index] = a[index] - b[index];
	}	

}

// Function Name: v3_dot_product
// Function Purpose: 
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
// Function Purpose: 
void v3_cross_product(float *dst, float *a, float *b)
{


}

// Function Name: v3_scale
// Function Purpose: 
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
    return 0.0; //stub
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
    return 0.0; //stub
}

// Function Name: v3_normalize
// Function Purpose: 
void v3_normalize(float *dst, float *a)
{

}