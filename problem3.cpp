#include <stdio.h>
#include <vector>

int main()
{
    const long numm = 600851475143L;
    long newnumm = numm;
    long largestFact = 0;
 
    int counter = 2;
    while (counter * counter <= newnumm) {
        if (newnumm % counter == 0) {
            newnumm = newnumm / counter;
            largestFact = counter;
        } else {
            counter++;
        }
    }
    if (newnumm > largestFact) { // the remainder is a prime number
        largestFact = newnumm;
    }
    printf("%ld\n",largestFact);
}
