#include<stdio.h>
const int target = 4000000;
int main()
{
    int i=1, previous=0, sum=0, temp=0;
    do
    {
        if((i%2==0))
        {
            sum=sum+i;
        }
        temp = i+previous;
        previous = i;
        i = temp;
    } while(i < target);
    printf("%d\n",sum);
    return 0;
