#include<stdio.h>
#include<stdlib.h>
#include"Functions.h"




int main(void)
{
	//Local variables 
	char flag=0;
	float num1=0;
	float num2=0;
	float result=0;
	
	//program start
	while(!flag)
	{
		system("cls");
		printf("Enter the value of number 1 \n");
		scanf("%f",&num1);
		printf("Enter the value of number 2 \n");
		scanf("%f",&num2);
		
		//ADD operation
		result=ADD(num1,num2);
		printf("the addition of the two numbers= %0.2f \n",result);
		
		//SUB operation
		result=SUB(num1,num2);
		printf("the subtraction of the two numbers= %0.2f \n",result);
		
		//MUL operation
		result=Mult(num1,num2);
		printf("the multiplication of the two numbers= %0.2f \n",result);
		
		//DIV operation
		result=DIV(num1,num2);
		if(result==999)
		{
			printf("Error Division by Zero! \n");
		}
		else
		{
			printf("the division of the two numbers= %0.2f \n",result);

		}
		
		//MODULAS operation
		result=MODULAS(num1,num2);
		if(result==999)
		{
			printf("Error denominator equal Zero! \n");
		}
		else
		{
			printf("the modulas of the two numbers= %0.2f \n",result);
		}
		
		printf("to continue press 0 and to exit press 1 \n");
		scanf("%d",&flag);
	}
	

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
	if(num2==0)
	{
		result=999;
	}
	else
	{
		result = num1/num2;
	}
	return result;
}


//Modulus Implementation   - Karim
float MODULAS (int num1,int num2)
{
	float result=0;
	if(num2==0)
	{
		result=999;
	}
	else
	{
		result = num1%num2;
	}
	return result;	
}

