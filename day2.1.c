// 1. WRITE A PROGRAM TO DEMOSTRATE THE WORKING OF THE OPERATORS
#include<stdio.h>
#include<stdlib.h>
void arithmetic_operators();
void assignment_and_increment();
void relational_operators();
void logical_and_bitwise();
int main()
{
    arithmetic_operators();
    assignment_and_increment();
    relational_operators();
    logical_and_bitwise();
    return 0;
}
void arithmetic_operators()
{
    printf("\n\nArithmetic Operators : \n\n");
    int a = 100,b = 10;
    printf("Addition Operator : %d + %d = %d\n",a,b,a + b);
    printf("Subtraction Operator : %d - %d = %d\n",a,b,a - b);
    printf("Multiplication Operator : %d * %d = %d\n",a,b,a * b);
    printf("Division Operator : %d / %d = %d\n",a,b,a/b);
    printf("Modulo Operator : %d %% %d = %d\n\n",a,b,a%b);
}
void assignment_and_increment()
{
    int a = 100,b = 10;
    a = b;
    printf("Assignment Operators \n\n");
    printf("a = b --> %d\n",a);
    printf("a += b --> %d\n",a += b);
    printf("a -= b --> %d\n",a -= b);
    printf("a *= b --> %d\n",a *= b);
    printf("a /= b --> %d\n",a /= b);
    printf("a %%= b --> %d\n\n",a %= b);
    printf("\n\nIncrement and decrement Operators : \n\n");
    printf("Pre Increment : ++a --> %d\n",++a);
    printf("Post Increment : a++ --> %d\n",a++);
    printf("a = %d after post increment\n\n",a);
    printf("Pre Decrement : --a --> %d\n",--a);
    printf("Post Decrement : a-- --> %d\n",a--);
    printf("a = %d after post Decrement\n",a);

}
void relational_operators()
{
    printf("\n\nRelational Operators\n\n");
    int a = 100,b = 10;
    if(a==a)
        printf("a==a --> %d\n",a==a);
    if(a!=b)
        printf("a!=b --> %d\n",a!=b);
    if(a > b)
        printf("a > b --> %d\n",a > b);
    if(b < a)
        printf("b < a --> %d\n\n",a < b);
}
void logical_and_bitwise()
{
    printf("\n\nLogical Operators\n\n");
    printf("Logical And : %d && %d --> %d\n",1,0,1&&0);
    printf("Logical OR : %d || %d --> %d\n",1,0,1||0);
    printf("Logical Not : !%d --> %d\n\n",1,!1);
    printf("\n\nBitwise Operators\n\n");
    printf("Bitwise And : %d & %d --> %d\n",3,5,3&5);
    printf("Bitwise OR : %d | %d --> %d\n",3,5,3|5);
    printf("Bitwise XOR : %d ^ %d --> %d\n",3,5,3^5);
    printf("Bitwise Not : ~%d --> %d\n",3,~3);
    printf("Bitwise Left Shift : %d << %d --> %d\n",3,2,3<<2);
    printf("Bitwise Right Shift : %d >> %d --> %d\n\n",3,2,3>>2);
}