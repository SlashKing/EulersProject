#include <stdio.h>
#include <time.h>
using namespace std;
 
int main()
{
    float ratio = 1./CLOCKS_PER_SEC;
    clock_t t1 = clock();
    
    long num = 20L;
    bool found = false;
    
    while (!found){
        for (unsigned int i=1; i<=20;i++){
            if(num % i != 0){break;}
            if( i == 20 && num % 20 == 0){ 
                found = true;
                break;
            }
        }
        num = !found ? num+20 : num;
    }
    clock_t t2 = clock();
    printf("%ld found in %f seconds\n", num, ratio*(long)t1+ratio*(long)t2);
    return 0;
}
