/**
    addition.c
    Purpose: Addition of two integer numbers in C
    @author Anway Kulkarni
*/
#include<stdio.h>

int main()
{
    //Declaration of the variables
    int number1,number2,addition_result;

    //printf is used for priting on the console
    //scanf is used for taking the input from console
    printf("Enter the first number\n");
    scanf("%d",&number1);

    printf("Enter the second number\n");
    scanf("%d",&number2);

    //Make Addition of the two numbers
    addition_result = number1 + number2;

    printf("The result of addition is :- ");
    printf("%d\n",addition_result);
    return 0;
}

