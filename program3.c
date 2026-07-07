#include<stdio.h>
int main()
{
    int num =35;
    if (num%7==0&&num>=21)
    {
        printf("%dthe number is multipiled by 7 and greater than or equal to 21", num);
    }
    else {
        printf("%dthe number is not multipiled by 7 and greater than or equal to 21", num);
    }

    num =14;
    if (num%7==0&&num>=21)
    {
        printf("%dthe number is multipiled by 7 and greater than or equal to 21", num);
    }
    else {
        printf("%dthe number is not multipiled by 7 and greater than or equal to 21", num);
    }
    return 0;
}
