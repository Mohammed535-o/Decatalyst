//2. WRITE A PROGRAM AND THE LOGIC OF FIBONACCI SERIES AND ARMSTRONG NUMBER
#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h> ///stdbool.h for bool data types
#include<math.h> ///math.h for log10() function


void print_fib_series(int n);
bool ArmStrong_Check(int n);


int main()
{
    int n;
    printf("Enter how many terms in Fibonacci Series : ");
    scanf("%d",&n);
    printf("Fibonacci Series : ");
    print_fib_series(n);
    printf("\n");
    printf("\n\nEnter a Number to For ArmStrong : ");
    scanf("%d",&n);
    if(ArmStrong_Check(n))
        printf("%d is a ARMSTRONG NUMBER\n",n);
    else  
        printf("%d is not a ARMSTRONG NUMBER\n",n);
    return 0;
}

//recursive program for fibonacci series upto n terms
void print_fib_series(int n)
{
    if(n==0) //base condition i.e if the no. of terms to be printed are 0 then terminate the function.
        return;

    ///variables f1,f2,f3 are declared static because, we are using recursion
    ///and we want to print the values based on previous values so if we dont declare them
    ///as static then the variables will get reinitialized every time the recursive call is made.
    static int f1 = 0,f2 = 1,f3;

    ///fibonacci series : 0 1 1 2 3 5...
    ///so based on fib series we initialized f1 and f2 as 0 and 1

    ///printing the value of current fib
    printf("%d ",f1);

    ///f3 is next term which is the sum of previous two terms f1 and f2
    f3 = f1 + f2;
    //updating the value of f1 to f2 to move forward in the series
    f1 = f2;
    //updating the value of f2 to f3
    f2 =f3;

    //making a recursive call with n - 1 because we already printed a term in the series
    //so now we need to print n - 1 terms now.
    print_fib_series(n - 1);
}



///function to check if a number is armstrong or not
bool ArmStrong_Check(int n)
{
    //getting no of digits in the number using the log10() function
    //example : 153 has 3 digits so log10(153) gives us value 2 then 
    //log10(153) + 1 gives us 3 i.e the number 153 has 3 digits
    int no_of_digits = log10(n) + 1;

    int sum = 0,temp = n;//initializing a temp variable with value of n
    //so that we can compare it's value with the sum obtained later.


    //running a while loop till n != 0
    while(n)
    {
        sum += pow(n%10,no_of_digits);
        //here sum = sum + last_digit^no_of_digits

        //updating value of n by dividing it with 10
        //for example 153 on dividing it by 10 changes to 15
        //so that we can access all the digits of the given number
        //and get the sum of digits raised to the power of no. of digits in the given number.
        n /= 10;
    }
    if(sum==temp)//checking if obtained sum is equal to original value of given number
    ///if equal then return true else false.
        return true;
    return false;
}