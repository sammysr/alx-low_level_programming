#include <stdio.h>
/**
 * main - Entry point
 */

int main()
{
	int i, j, isprime;
	long int num;
	/* Input a number from user */

	num = 612852475143;

	printf("All prime Factors of %ld are: \n", num);

	/* Find all prime factors */
	for(i=2; i<=num; i++)
	{
		/* check 'i' for factor of num */
		if(num%i==0)
		{
			/* check 'i' for prime */
			isprime = 1;
			for(j=2; j<=i/2; j++)
			{
				if(i%j==0)
				{
					isprime = 0;
					break;
				}
			}

			/* If 'i' is prime number and factor of num */
			if(isprime==1)
			{
				printf("%d, ", i);
			}
		}
	}

	return 0;
}
