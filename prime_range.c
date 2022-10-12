/*
** Print all prime numbers within a range.
** Input - 1, 10. Output - 2,3,5,7.
** Write appropriate function(s).
*/

#include <stdio.h>
int is_prime(int); // Prototype declaration
void prime_range(int n1, int n2);

int main()
{
	int n1,n2;
	printf("First no - ");
	scanf("%d", &n1);
	printf("Second no - ");
	scanf("%d", &n2);
	
	prime_range(n1,n2);
	return 0;
}
//function definition
int is_prime(int num)     // <<-- Function signature
{
	if(num <= 1)
	{
		return 0;
	}
	
	for(int i = 2; i <= num/2; i++)  
	{
		if(num % i == 0)  // found a factor ==> not a prime
		{
			return 0;  // found a factor...we don't need to find another
		}
	}
	return 1;	
}

void prime_range(int n1, int n2)
{
	int flag;
	
	for(int k=n1; k<= n2; k++)
{
	
	flag= is_prime(k);   // function call 
	 
	if(flag)
	{
		printf("%d ", k);
	}
}
	printf("\n");	
}

