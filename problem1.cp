#include<stdio.h>
const int target = 999;
int divisibleBy(int n){
    int p = target/n;
    int result = (n*(p*(p+1))/2);
    return result;
}
int main()
{
    int i,sum=0;
    for(i=0;i<1000;i++)
    {
        if((i%5==0)||(i%3==0))
        {
            sum=sum+i;
        }
    }
    int sum2 = divisibleBy(3) + divisibleBy(5) - divisibleBy(15);
    printf("%d\n",sum);
    printf("%d\n", sum2);
    return 0;
}
