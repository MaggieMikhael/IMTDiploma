#include <stdio.h>
int main()
{
	int number;
	int i=3;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Test expression is true if number is less than 0
    if (number < 0)
    {
        printf("You entered %d \n",i);
		
		/// Why don't print Number , if number -8 for example ??
		
    }

    printf("The if statement is easy.");

    return 0;
}