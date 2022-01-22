//Calculate the sum of first and last digit of given 4 bit number.


#include<stdio.h>
int main()
{
	int n , sum = 0 , fd , ld ;
	printf("Enter a 4 digit number : ");
	scanf("%d" , &n );
	
	// for last digit we use module operator and divide by 10 
	ld = n % 10 ;
	 
	// for first digit we divide the n by 10 until n > 10
	while(n >= 10 )
	{
		n = n / 10 ;
	}
	fd = n ;
	// taking out sum of first and last digit 
	sum = fd + ld ;
	printf("The sum of First and Last digit is %d.\n", sum );
 	return 0 ;
}


