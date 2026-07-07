#include<stdio.h>
int main()
{
	int num;
	num =52;
	if (num > 0)
	{printf("%d is positive\n", num);}
    else if (num < 0)
    {printf("%d is negative\n", num);}
    else
    {    printf("%d is neutral\n", num);}

    // Test -10
    num = -10;
    if (num > 0)
    {  printf("%d is positive\n", num);}
    else if (num < 0)
    {    printf("%d is negative\n", num);}
    else
    {   printf("%d is neutral\n", num);}

    // Test 0
    num = 0;
    if (num == 0)
    {printf("%d is positive\n", num);}
    else if (num < 0)
    {  printf("%d is negative\n", num);}
    else
    { printf("%d is neutral\n", num);}

    return 0;
}
