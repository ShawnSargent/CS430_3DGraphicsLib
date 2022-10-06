// Header Files
#include "v3math.h"

// Function Prototypes
bool v3_equals(float *a, float *b, float tolerance);


int main()
{

	printf( "3D Math Library Testing Program\n\n" );

	printf( "===============================\n" );
	
	printf( "#### Test 1.1 : v3_from_points() : \n" );



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


bool test_points()
{
	// testing Both positive
	float pointOne[3] = {1.1, 2.1, 6.1};
	float pointTwo[3] = {3.3, 4.2, 12.6};
	float expectedVal[3] = {2.2, 2.1, 6.5};
	float actualVal[3];
	v3_from_points(actualVal, pointOne, pointTwo);

	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 1.1 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}

	// Testing one positive one negative
	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[3] = -5.1;
	 
	expectedVal[0] = -4.4;
	expectedVal[0] = -4.2;
	expectedVal[0] = -11.6;

	v3_from_points(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 1.2 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}
	
	// Testing both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[3] = -5.1;
	 
	expectedVal[0] = 0.0;
	expectedVal[0] = 0.0;
	expectedVal[0] = -0.4;

	v3_from_points(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 1.3 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}
}

bool test_add_and_subtract(){
	// testing Add with Both positive
	float pointOne[3] = {1.1, 2.1, 6.1};
	float pointTwo[3] = {3.3, 4.2, 12.6};
	float expectedVal[3] = {4.4, 6.3, 18.7};
	float actualVal[3];
	v3_add(actualVal, pointOne, pointTwo);

	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 2.1 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}

	// Testing Add with one positive one negative
	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[3] = -5.1;
	 
	expectedVal[0] = -2.2;
	expectedVal[0] = 0.0;
	expectedVal[0] = 1.0;

	v3_add(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 2.2 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}
	
	// Testing Add with both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[3] = -5.1;
	 
	expectedVal[0] = -6.6;
	expectedVal[0] = -4.2;
	expectedVal[0] = -10.2;

	v3_add(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 3.3 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}

	// Testing Subtract both positive
	pointOne[0] = 3.3;
	pointOne[1] = 2.1;
	pointOne[3] = 5.1;
	
	pointTwo[0] = 3.3;
	pointTwo[1] = 2.1;
	pointTwo[3] = 5.1;

	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;

	v3_subtract(actualVal, pointOne, pointTwo);

	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 2.1 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}

	// Testing one positive one negative
	pointTwo[0] = -3.3;
	pointTwo[1] = -2.1;
	pointTwo[3] = -5.1;
	 
	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;

	v3_subtract(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 2.2 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}
	
	// Testing both Negative
	pointOne[0] = -3.3;
	pointOne[1] = -2.1;
	pointOne[3] = -5.1;
	 
	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;
	expectedVal[0] = 5.5;

	v3_subtract(actualVal,pointOne,pointTwo);
	if(!v3_equals(expectedVal, actualVal, 0.1)){
		printf("#### TEST 3.3 FAILED:\n");
		printf("\tExpected Val: %lf, %lf, %lf \n", expectedVal[0], expectedVal[1], expectedVal[2]);
		printf("\t  Actual Val: %lf, %lf, %lf \n", actualVal[0], actualVal[1], actualVal[2]);
	}

	

}
bool test_dot_and_cross(float* expectedVal, float* actualVal, int* test){

}
bool test_scale(float* expectedVal, float* actualVal, int* test){

}
bool test_angel(float* expectedVal, float* actualVal, int* test){

}
bool test_reflect_len_normal(float* expectedVal, float* actualVal, int* test){

}