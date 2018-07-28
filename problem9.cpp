#include <stdio.h>
#include <time.h>
#include <string>
using namespace std;
bool isTriplet(int a, int b, int c){
    if ( a*a + b*b == c*c){return true;}
    return false;
}

long int calcA(int p, int q){
    return 2*p*q;
}
long int calcB(int p, int q){
    return p*p - q*q;
}
long int calcC(int p ,int q){
    return p*p + q*q;
}
int main()
{
    float ratio = 1./CLOCKS_PER_SEC;
    clock_t t1 = clock();
    // a = 2pq
    // b = p2 - q2
    // c = p2 + q2
    const int goal = 1000;
    
    unsigned int a=0,b=0,c=0,prod=0,_p=0,_q=0;
    
    long int triplet=0L;
    
    while(_p < goal && triplet != goal){
        _p++;
        
        // q must be less than p so we exploit this fact
        for(unsigned int q=0;q<_p;q++){
                a = abs(calcA(_p,q));
                b = abs(calcB(_p,q));
                c = abs(calcC(_p,q));
                if(isTriplet(a,b,c)){
                    triplet = a+b+c;
                    if (triplet==goal){
                        _q=q;
                        break;
                    }else{
                        triplet=0;
                    }
                }
        }
    }
    clock_t t2 = clock();
    // if _q was set, we have a triplet :D
    if(_q == 0){
        printf("A Pythagorean triple whose sums of a,b,c are equal to %d does not exist", goal);
    }else{
        prod = a*b*c;
        printf("%d %d %d %d %d %d found in %f seconds\n", a, b, c, prod, _p, _q, ratio*(long)t1+ratio*(long)t2);
    }
    return 0;
    
}
