// Header Files
#include <stdio.h>
#include "v3math.h"

// Function Prototypes
bool v3_equals(float *a, float *b, float tolerance);

void test_floating_vals(float *expectedVal, float *actualVal);


int main()
{
	printf( "===============================\n" );
	printf( "3D Math Library Testing Program\n\n" );
	printf( "===============================\n\n" );

	printf( "===============================\n" );
	printf( "Testing Vector from points function\n");
	printf( "===============================\n\n" );

	// testing Both positive
	float pointOne[3] = {1.1, 2.1, 6.1};
	float pointTwo[3] = {3.3, 4.2, 12.6};
	float expectedVal[3] = {2.2, 2.1, 6.5};
	float actualVal[3];

	printf("Testing v3_from_points with positive inputs\n");
	v3_from_points(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing one positive two negative
	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[2] = -5.1;
	 
	expectedVal[0] = -4.4;
	expectedVal[1] = -4.2;
	expectedVal[2] = -11.2;

	printf("Testing v3_from_points with input1 = positive, input 2 = negative\n");
	v3_from_points(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing one negative two postive
	pointOne[0] = -6.7;
	pointOne[1] = -9.0;
	pointOne[2] = -2.0;

	pointTwo[0] = 3.3;
	pointTwo[1] = 2.1;
	pointTwo[2] = 5.1;
	 
	expectedVal[0] = 10.0;
	expectedVal[1] = 11.1;
	expectedVal[2] = 7.1;

	printf("Testing v3_from_points with input1 = positive, input 2 = negative\n");
	v3_from_points(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);
	
	// Testing both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[2] = -5.1;

	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[2] = -5.1;
	 
	expectedVal[0] = 0.0;
	expectedVal[1] = 0.0;
	expectedVal[2] = 0.0;

	printf("Testing v3_from_points with both negative input\n");
	v3_from_points(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	printf( "===============================\n" );
	printf( "Testing Addition and Subtraction functions\n");
	printf( "===============================\n\n" );
	
	// Testing Addition both positive
	pointOne[0] = 1.1;
	pointOne[1] = 2.2;
	pointOne[2] = 3.3;

	pointTwo[0] = 3.3;
	pointTwo[1] = 6.6;
	pointTwo[2] = 4.4;
	 
	expectedVal[0] = 4.4;
	expectedVal[1] = 8.8;
	expectedVal[2] = 7.7;

	printf("Testing v3_add with with positive inputs\n");
	v3_add(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing Addition one: positive two: negative
	pointOne[0] = 5.5;
	pointOne[1] = 4.4;
	pointOne[2] = 3.3;

	pointTwo[0] = -3.3;
	pointTwo[1] = -2.2;
	pointTwo[2] = -6.6;
	 
	expectedVal[0] = 2.2;
	expectedVal[1] = 2.2;
	expectedVal[2] = -3.3;

	printf("Testing v3_add with input1 = positive, input 2 = negative\n");
	v3_add(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing addition one: negative two: postive
	pointOne[0] = -6.6;
	pointOne[1] = -9.9;
	pointOne[2] = -2.2;

	pointTwo[0] = 3.3;
	pointTwo[1] = 4.4;
	pointTwo[2] = 2.2;
	 
	expectedVal[0] = -3.3;
	expectedVal[1] = -5.5;
	expectedVal[2] = 0.0;

	printf("Testing v3_add with input1 = negative, input 2 = positive\n");
	v3_add(actualVal, pointOne, pointTwo);
	test_floating_vals(actualVal, expectedVal);
	
	// Testing addition both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[2] = -4.1;

	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[2] = -4.1;
	 
	expectedVal[0] = -6.6;
	expectedVal[1] = -4.2;
	expectedVal[2] = -8.2;

	printf("Testing v3_add with Both negative inputs\n");
	v3_add(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing subtraction both positive
	pointOne[0] = 5.5;
	pointOne[1] = 4.4;
	pointOne[2] = 3.3;

	pointTwo[0] = 3.3;
	pointTwo[1] = 2.2;
	pointTwo[2] = 1.1;
	 
	expectedVal[0] = 2.2;
	expectedVal[1] = 2.2;
	expectedVal[2] = 2.2;

	printf("Testing v3_subtract with with positive inputs\n");
	v3_subtract(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing subtraction one: positive two: negative
	pointOne[0] = 5.5;
	pointOne[1] = 4.4;
	pointOne[2] = 3.3;

	pointTwo[0] = -3.3;
	pointTwo[1] = -2.2;
	pointTwo[2] = -6.6;
	 
	expectedVal[0] = 8.8;
	expectedVal[1] = 6.6;
	expectedVal[2] = 9.9;

	printf("Testing v3_subtract with input1 = positive, input 2 = negative\n");
	v3_subtract(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing subtraction one: negative two: postive
	pointOne[0] = -6.6;
	pointOne[1] = -3.3;
	pointOne[2] = -2.2;

	pointTwo[0] = 3.3;
	pointTwo[1] = 4.4;
	pointTwo[2] = 2.2;
	 
	expectedVal[0] = -9.9;
	expectedVal[1] = -7.7;
	expectedVal[2] = -4.4;

	printf("Testing v3_subtract with input1 = negative, input 2 = positive\n");
	v3_subtract(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);
	
	// Testing subtraction both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[2] = -4.1;

	pointTwo[0] = -3.3;
	pointTwo[1] = -5.1;
	pointTwo[2] = -6.1;
	 
	expectedVal[0] = 0.0;
	expectedVal[1] = 3.0;
	expectedVal[2] = 2.0;

	printf("Testing v3_subtract with both negative input\n");
	v3_subtract(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	printf( "===============================\n" );
	printf( "Testing dot and cross product functions\n");
	printf( "===============================\n\n" );

	// Testing Dot with positive values
	pointOne[0] = 1.1;
	pointOne[1] = 2.2;
	pointOne[2] = 3.3;

	pointTwo[0] = 3.3;
	pointTwo[1] = 4.4;
	pointTwo[2] = 5.5;
	 
	expectedVal[0] = 31.46;
	expectedVal[1] = 0.0;
	expectedVal[2] = 0.0;

	// setting to 0 because it returns scalar
	actualVal[1] = 0.0;
	actualVal[2] = 0.0;

	printf("Testing v3_dot_product with with positive inputs\n");
	actualVal[0] = v3_dot_product(pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing Dot with one positive one negative
	pointOne[0] = 1.1;
	pointOne[1] = 2.2;
	pointOne[2] = 3.3;

	pointTwo[0] = -3.3;
	pointTwo[1] = -6.6;
	pointTwo[2] = -4.4;
	 
	expectedVal[0] = -32.67;

	printf("Testing v3_dot_product input1 = positive, input 2 = negative\n");
	actualVal[0] = v3_dot_product(pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing Dot with one negative one positive
	pointOne[0] = -5.5;
	pointOne[1] = -2.2;
	pointOne[2] = -3.3;

	pointTwo[0] = 7.7;
	pointTwo[1] = 6.6;
	pointTwo[2] = 4.4;
	 
	expectedVal[0] = -71.39;

	printf("Testing v3_dot_product input1 = positive, input 2 = negative\n");
	actualVal[0] = v3_dot_product(pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing Dot with negative values
	pointOne[0] = -1.1;
	pointOne[1] = -2.2;
	pointOne[2] = -3.3;

	pointTwo[0] = -3.3;
	pointTwo[1] = -6.6;
	pointTwo[2] = -4.4;
	 
	expectedVal[0] = 32.67;

	printf("Testing v3_dot_product input1 = positive, input 2 = negative\n");
	actualVal[0] = v3_dot_product(pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);

	// Testing Cross with positive values
	pointOne[0] = 5.5;
	pointOne[1] = 4.4;
	pointOne[2] = 3.3;

	pointTwo[0] =  2.2;
	pointTwo[1] =  1.1;
	pointTwo[2] =  0.0;
	 
	expectedVal[0] = -3.63;
	expectedVal[1] = 7.26;
	expectedVal[2] = -3.63;

	printf("Testing v3_cross_product with input1 = positive, input 2 = negative\n");
	v3_cross_product(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);
	// Testing Cross with one positive one negative
	pointOne[0] = 5.5;
	pointOne[1] = 4.4;
	pointOne[2] = 3.3;

	pointTwo[0] = -3.3;
	pointTwo[1] = -2.2;
	pointTwo[2] = -6.6;
	 
	expectedVal[0] = -21.78;
	expectedVal[1] = 25.41;
	expectedVal[2] = 2.42;

	printf("Testing v3_cross_product with input1 = positive, input 2 = negative\n");
	v3_cross_product(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);
	// Testing Cross with one negative one positive
	pointOne[0] = -5.5;
	pointOne[1] = -4.4;
	pointOne[2] = -3.3;

	pointTwo[0] = 4.3;
	pointTwo[1] = 2.2;
	pointTwo[2] = 6.6;
	 
	expectedVal[0] = -21.78;
	expectedVal[1] = 22.11;
	expectedVal[2] = 6.82;

	printf("Testing v3_cross_product with input1 = positive, input 2 = negative\n");
	v3_cross_product(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);
	// Testing Cross with negative values
	pointOne[0] = -5.5;
	pointOne[1] = -4.4;
	pointOne[2] = -3.3;

	pointTwo[0] = -1.1;
	pointTwo[1] = -2.2;
	pointTwo[2] = -6.6;
	 
	expectedVal[0] = 21.78;
	expectedVal[1] = -32.67;
	expectedVal[2] = 7.26;

	printf("Testing v3_cross_product with input1 = positive, input 2 = negative\n");
	v3_cross_product(actualVal, pointOne, pointTwo);
	test_floating_vals(expectedVal, actualVal);


	printf( "===============================\n" );
	printf( "Testing scale\n");
	printf( "===============================\n\n" );

	// positive scale
	actualVal[0] = 1.1;
	actualVal[1] = 2.2;
	actualVal[2] = 3.3;

	expectedVal[0] = 5.5;
	expectedVal[1] = 11.0;
	expectedVal[2] = 16.5;
	
	printf("Testing v3_scale with postive number\n");
	v3_scale(actualVal, 5);
	test_floating_vals(expectedVal, actualVal);

	// negative scale
	actualVal[0] = 1.1;
	actualVal[1] = 2.2;
	actualVal[2] = 3.3;

	expectedVal[0] = -5.5;
	expectedVal[1] = -11.0;
	expectedVal[2] = -16.5;
	
	printf("Testing v3_scale with negative number\n");
	v3_scale(actualVal, -5);
	test_floating_vals(expectedVal, actualVal);
	
	// fraction scale
	actualVal[0] = 1.1;
	actualVal[1] = 2.2;
	actualVal[2] = 3.3;

	expectedVal[0] = 0.55;
	expectedVal[1] = 1.10;
	expectedVal[2] = 1.65;
	
	printf("Testing v3_scale with fraction number\n");
	v3_scale(actualVal, 0.5);
	test_floating_vals(expectedVal, actualVal);

	// 0 scale
	actualVal[0] = 1.1;
	actualVal[1] = 2.2;
	actualVal[2] = 3.3;

	expectedVal[0] = 0.0;
	expectedVal[1] = 0.0;
	expectedVal[2] = 0.0;
	
	printf("Testing v3_scale with fraction number\n");
	v3_scale(actualVal, 0.0);
	test_floating_vals(expectedVal, actualVal);


	printf( "===============================\n" );
	printf( "Testing Angle and quick Angle\n");
	printf( "===============================\n" );

	// testing Angle positive values
	// testing Angle negative values
	// testing Angle zero values

	// testing quick Angle positive values
	// testing quick Angle negative values
	// testing quick Angle zero values

	printf( "===============================\n" );
	printf( "Testing Reflect, Length, and Normalize\n");
	printf( "===============================\n\n" );

	
	
	



	return 0;
}

bool v3_equals(float *a, float *b, float tolerance)
{
	// assume 3 elements
	bool isEqual = true;

	for(int i = 0; i < 3; i++)
	{
		if (fabs(a[i] - b[i]) > tolerance)
		{
			isEqual = false;
		}
	}

	return isEqual;
}

void test_floating_vals(float *expectedVal, float *actualVal){
	if(!v3_equals(expectedVal, actualVal, 0.001)){
		printf("#### TEST FAILED\n");
		printf("\t Expected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n\n", actualVal[0], actualVal[1], actualVal[2]);
	}else{
		printf("TEST PASSED\n");
		printf("\t Expected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n\n", actualVal[0], actualVal[1], actualVal[2]);
	}


}