#include <stdio.h>
#include <time.h>
#include <cmath>
using namespace std;
 
int main()
{
    float ratio = 1./CLOCKS_PER_SEC;
    clock_t t1 = clock();
    int i = 0;
    int power = 2;
    long sum = 0L;
    long sum2 = 0L;
    while (i<=100){ 
        sum += pow(i, power);
        sum2 += i;
        i++;
    }
    sum2 = pow(sum2, power);
    long result = sum2 - sum;
    clock_t t2 = clock();
    printf("%ld found in %f seconds\n", result, ratio*(long)t1+ratio*(long)t2);
    return 0;
}
