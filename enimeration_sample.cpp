#include<stdio.h>

int main()
{
    enum MONTH {Jan=0, Feb, Mar };
      enum MONTH month = Mar;
    if (month ==0)
    {
        printf("Month is January");
    }
    else if (month ==1)
    {
        printf("Month is February");
    }
    else if (month ==2)
    {
        printf("Month is March");
    }

    return 0;
}