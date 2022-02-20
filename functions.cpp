#include "functions.h"


float findMinValue(float n1, float n2, float n3)
{
	float min = 0.0f;
	min=n1;
	if(min<n2&&min<n3){
		return min;;
	}
	else if(min>n2){
		min=n2;
	}
	else if(min>n3){
		min=n3;
	}
	return min;
}
