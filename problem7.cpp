#include <stdio.h>
#include <time.h>
#include <cmath>
using namespace std;
bool isPrime(int numm) {
    if (numm <= 1) {
        return false;
    }
 
    if(numm == 2){
        return true;
    }
 
    if (numm % 2 == 0) {
        return false;
    }
 
    int counter = 3;
 
    while ((counter * counter) <= numm) {
        if (numm % counter == 0) {
            return false;
        } else {
            counter +=2;
        }
    }
 
    return true;
} 
int main()
{
    float ratio = 1./CLOCKS_PER_SEC;
    clock_t t1 = clock();
    int goal = 10001;
    int numberOfPrimes= 1;
    int i=1;
    while(numberOfPrimes < goal){
        i+=2;
        if(isPrime(i)){
            numberOfPrimes+=1;
        }
    }
    clock_t t2 = clock();
    printf("%d found in %f seconds\n", i, ratio*(long)t1+ratio*(long)t2);
    return 0;
}
