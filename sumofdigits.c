//program to find sum of digits of a  number

#include <stdio.h>

int sumOfDigits(int a);

int main(){
    printf("%d", sumOfDigits(123459));//call function and print result
}

int sumOfDigits(int a){
    int sum = 0;//set sum variable to 0
    while(a > 0)
    {
        sum += (a % 10);// find smallest digit and add to sum
        a /= 10;//assign a to its mod 10 to delete smallest digit
    }
    return sum;
}
