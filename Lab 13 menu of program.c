/*
Student Name:salav Thapa
subject:Programing Fundamental
Lab Sheet No:09
Program:Write a menu of program
Roll No:30
Date:1st Dec 2016
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int n,z;
    char c;
    printf("#####################Menu Based Programs####################################");
    printf("\n#                   Choose from the menu                                   #");
    printf("\n#                   1. odd or even                                         #");
    printf("\n#                   2. prime or not                                        #");
    printf("\n#                   3. vowel or consonant                                  #");
    printf("\n#                   4. alphabet or not                                     #");
    printf("\n#                   5. divisible by 5 and 11                               #");
    printf("\n#                   6. exit                                                #");
    printf("\n############################################################################");
    printf("\n Enter a character:");
    scanf("%c",&c);
    printf("\n choose  a number from menu:");
    scanf("%d",&z);
    switch(z)
    {
    case 1:
        n=c;
        if (n%2==0)
        {
            printf("the number is even");

        }
        else
        {
            printf("the number is odd");
        }
    break;




    case 3:

            if(c=='a'||c=='A'||c=='e'||c=='E'||c=='i'||c=='I'||c=='o'||c=='O'||c=='u'||c=='U')
            {
                printf("the given is vowel");
            }
            else
            {
                printf("the given is consonant");
            }
            break;

    case 4:
        n=c;

            if(n>=65&&n<=90 || n>=97&&n<=122)
            {
                printf("the given is alphabet");
            }
            else
            {
                printf("the given is not alphabet");
            }
            break;

    case 5:
        n=c;

            if(n%5==0 && n%11==0)
            {
                printf("the number is divisible by 5 and 11");
            }
            else
            {
                printf("the number is not divisible by 5 and 11 ");
            }
            break;
    default:
        printf("Thanks for visiting");
    }
        getch();
        return 0;

}
