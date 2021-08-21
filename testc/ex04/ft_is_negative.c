#include <unistd.h>
#include <stdio.h>

void ft_is_negative(int n)
{
	if( n >= 0 )
		printf("The introduced number is positive \n");
	else
		printf("The introduced number is negative \n");
}

int main(void)
{
	int n;
	printf("Enter a number, please: ");
	scanf("%d", &n);

	ft_is_negative(n);
	return 0;
}
