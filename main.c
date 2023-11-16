#include<stdio.h>
#include"Functions.h"




int main(void)
{
	
	float num1=0;
	float num2=0;
	float result=0;
	printf("Enter the value of number 1 \n");
	scanf("%d",&num1);
	printf("Enter the value of number 2 \n");
	scanf("%d",&num2);
	result=ADD(num1,num2);
	printf("the addition of the two numbers= %d \n",result);
	result=SUB(num1,num2);
	printf("the addition of the two numbers= %d \n",result);
	result=MUL(num1,num2);
	printf("the addition of the two numbers= %d \n",result);
	result=DIV(num1,num2);
	printf("the addition of the two numbers= %d \n",result);
	result=MODULAS(num1,num2);
	printf("the addition of the two numbers= %d \n",result);

	return 0;
}

//ADD Implementation - Moamen

float ADD (float num1,float num2)
{
	return num1 + num2;
}


//SUB Implementation - Sara

float SUB (float num1,float num2)
{
	return num1 - num2;	
}


// MUL Implementation  - Asmaa

float Mult(float num1,float num2)
{
    return num1*num2;
}


//Divide Implementation  - Nour
float DIV(float num1, float num2)
{
	float result=0;
	result = num1/num2;
	return result;
}


//Modulus Implementation   - Karim
float MODULAS (float num1,float num2);
{
	return (num1%num2);	
}

