//program to find lowest common multiple

#include <stdio.h>

int gcd(int a, int b);//first find greatest common divisor
int lcm(int a, int b, int gcd);//multiply numbers and divide with greatest common divisor


int main(){
    int x = 24;
    int y = 8;
    int lowestCommonMultiple = lcm(x, y, gcd(x, y));
    printf("%d", lowestCommonMultiple);
}


int lcm(int a, int b, int gcd){
    int result = (a * b) / gcd;
    return result;

}




int gcd(int a, int b){
    int result = 1;
    if(a < b)
    {
        for(int i = 1; i <= a; i++)
        {
            if(a % i == 0 &&b % i == 0)
            {
                result = i;
            }
        }
    }
    else
    {
        for(int i = 1; i <= b; i++)
        {
            if(a % i == 0 &&b % i == 0)
            {
                result = i;
            }
        }
    }

    return result;
}
