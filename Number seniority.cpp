#include <stdio.h>
int main ()
{
	float num1,num2,num3;
	printf("Enter three numerical values\n");
	scanf("%f%f%f",&num1,&num2,&num3);
	if (num1>num2 && num1>num3)
	{		
		printf ("%f is the largest of the three",num1);
	}
	else if (num2>num1 && num2>num3)
	{
		printf ("%f is the largest of the three",num2);
	}
	else if (num3>num1 && num3>num2)
	{
		printf ("%f is the largest of the three",num3);
	}
	else if (num1==num2 && num1==num3)
	{
		printf ("They are all equal");
	}
	return 0;
}
