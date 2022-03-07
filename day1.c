/*WRITE A PROGRAM IN C WHICH 
PERFORMS ADDITION, SUBSTRACTION ,MULTIPLICATION AND DIVISION*/
#include<stdio.h>
#include<stdlib.h>


int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
float division(int a,int b);
void input(int *a,int *b);
void zero_exception(int b);


int main()
{
    int choice;
    do
    {
        int a,b;
        printf("|1. Addition     | 3. Multiplication|\n");
        printf("|2. Subtraction  | 4. Division      |\n");
        printf("|0. Exit the program                |\n\n");
        printf("Enter Your Choice : ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
                input(&a,&b);
                printf("\n\nSum of %d and %d is : %d\n\n",a,b,add(a,b));
            break;
            case 2:
                input(&a,&b);
                printf("\n\nDifference of %d and %d is : %d\n\n",a,b,sub(a,b));
            break;
            case 3:
                input(&a,&b);
                printf("\n\nProduct of %d and %d is : %d\n\n",a,b,mul(a,b));
            break;
            case 4:
                input(&a,&b);
                printf("\n\nDivision of %d and %d is : %f\n\n",a,b,division(a,b));
            break;
            default :
                printf("\n\nExiting the program\n\n");
                exit(0);
            break;
        }
    }while(choice!=0);
    return 0;
}
int add(int a,int b){
    return a + b;
}
int sub(int a,int b){
    return a - b;
}
int mul(int a,int b){
    return a * b;
}
float division(int a,int b){
    zero_exception(b);//checking for division by zero
    return (float)a/b;
}

///function to take inputs a and b from user
///input() function has pass by address variables
void input(int *a,int *b){
    printf("Enter a : ");
    scanf("%d",&(*a));
    printf("Enter b : ");
    scanf("%d",&(*b));
}

///function to check for division by zero 
///if division by zero then call the main() function
///and again ask for input
void zero_exception(int b){
    if(b==0){
        printf("\n\nError : Division By Zero!\n\n");
        main();
    }
}