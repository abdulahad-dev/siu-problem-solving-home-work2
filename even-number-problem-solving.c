//Write a  C Program 1 to 100 even number print

#include<stdio.h>

int main()
{

    for(int i=0; i<=100; i++)
    {
        if(i%2 ==0)
        {
            printf("Even Number: %d\n", i);
        }

    }
    return 0;
}
