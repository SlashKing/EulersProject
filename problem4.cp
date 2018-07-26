#include <stdio.h>
#include <time.h>
#include <string>
using namespace std;
 
 bool checkPalindrome(std::string my_str) {
    for (unsigned int d=0; d< my_str.size()/2; d++) {
        if (my_str.at(d) != my_str.at(my_str.size()-1-d)) {
            return false;
        }
    }
    return true;
}
int is_palindrome(unsigned int num) {
    unsigned int reversed = 0;
    unsigned int original = num;
 
    if (num < 10) return 1;
    if (num % 10 == 0) return 0;
 
    while (num >= 1) {
        reversed = (reversed * 10) + (num % 10);
        num = num/10;
    }
 
    if (original == reversed) return 1;
    else return 0;
}
 
// Driver Program
int main()
{
    float ratio = 1./CLOCKS_PER_SEC;
    clock_t t1 = clock();
    
    long num = 0L;
    long palindrome = 0L;
    std::string my_str = " ";
    for (int i=999; i>99; i--){
        for(int j=999; j>99; j--){
            num = i*j; 
            my_str = std::to_string(num);
            
            if(is_palindrome(num)){
                palindrome = num > palindrome ? num : palindrome;
            }
            
        }
        //if (palindrome > 0L){ break; }
    }
    clock_t t2 = clock();
    printf("%ld found in %f seconds\n", palindrome, ratio*(long)t1+ratio*(long)t2);
    return 0;
}
