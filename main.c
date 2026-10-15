/*

1- Write a C function to check whether a number is palindrome or not.
The function prototype :
int is_palindrome (int x)
Note: An integer is a palindrome if the reverse of that number is equal to
the original number

#include <stdlib.h>
int is_palindrome (int x)
{
    int orignal=x;
    int reversed=0;
    int temp=x;
    while(temp!=0)
    {

        int remandier=temp%10;
        reversed=reversed*10+remandier;
        temp/=10;
    }
    if(orignal==reversed)
    {

        return 1;
    }
    else
    {
        return 0;
    }

}

int main(void)
{

    int num;
    printf("Enter num ");
    scanf("%d",&num);
    if(is_palindrome(num))
    {
        printf("%d is palindrome",num);
    }
    else
    {
        printf("%d is not palindrome",num);
    }
    return 0;
}*/

//----------------------------------------------------------------------------------------------------------

/*2- Write a C function to check if 2 given integers have the same last digit 
or not 


#include <stdio.h>
int same_last_digit(int num1, int num2)
{

    if ((num1 % 10) == (num2 % 10))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main(void)
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (same_last_digit(a, b))
    {
        printf("The numbers have the same last digit.\n");
    }
    else
    {
        printf("The numbers do not have the same last digit.\n");
    }

    return 0;
}*/

//----------------------------------------------------------------------------------------------------

/*3- Write a C function to check whether a given number can be expressed 
as a sum of 2 Prime numbers. 

#include <stdio.h>


int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return 0;
        }
    }
    return 1;
}

 int sum_of_two_primes(int n) {
    int found = 0;


    for (int i = 2; i <= n / 2; i++) {

        if (is_prime(i) && is_prime(n - i)) {
            printf("%d = %d + %d\n", n, i, n - i);
            found = 1;
        }
    }

    return found;
}

int main(void) {
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (sum_of_two_primes(num)) {
        printf("Yes, %d can be expressed as a sum of 2 prime numbers.\n", num);
    } else {
        printf("No, %d cannot be expressed as a sum of 2 prime numbers.\n", num);
    }

    return 0;
}*/
























