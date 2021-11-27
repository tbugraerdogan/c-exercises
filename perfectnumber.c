//program to find perfect numbers between 1 to 1000

#include <stdio.h>

int isPerfect(int x);//function prototype

int main(){
    for(int j = 1; j <= 1000; j++)//pass values between 1 to 1000 to program
    {
        if(isPerfect(j) == 1)
            {
                printf("%d\n", j);
            }
    }
}



int isPerfect(int x)
{
    int sum = 0;
    for(int i = 1; i <= (x / 2); i++)
    {
        if(x % i == 0)//add factor of number if its a factor of that number
        {
            sum += i;
        }
    }
    if(sum == x)//if sum of factors equals to that number then it is a perfect number
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
