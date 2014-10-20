#include <stdio.h>
int reverse_number( long int num)
{
	int reverse = 0;
	while(num != 0)
	{
		reverse = reverse * 10;
		reverse = reverse + num % 10;
		num = num / 10;
	}
	return rev_num;
	}
int main()
{
	printf("5170984 %d\n", reverse_number(5170984));
	printf("406567 %d\n", reverse_number(406567));
	printf("368750 %d\n", reverse_number(368750));
	printf("2369510 %d\n", reverse_number(2369510));
	printf("2183293 %d\n", reverse_number(2183293));
	return 0;
}
