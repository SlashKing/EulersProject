#include<stdio.h>
long unsigned int target = 999;
long unsigned int divisibleBy(long unsigned int n){
    long unsigned int p = target/n;
    long unsigned result = (n*(p*(p+1))/2);
    return (long unsigned int)result;
}
int main()
{
    // Using brute force method of iterating and testing if i is divisible by 3 or 5
    // When either or both are divisible by 3 or 5, the sum is added. Not efficient.
    unsigned int i,sum=0;
    for(i=0;i<=target;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+i;
        }
    }
    
    // Method 2 use arithmetic progression 
    unsigned int sum2 = divisibleBy(3) + divisibleBy(5) - divisibleBy(15);
    printf("%d\n",sum);
    printf("%d\n", sum2);
    return 0;
}
