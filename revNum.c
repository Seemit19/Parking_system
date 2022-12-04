/*codes for complete beginner*/
/*program to reverse a number*/
/*author:Seemit Kumar,Date:04/12/2022*/
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, rem, y ;
       {y=0;}
    printf("\n\nInput number of which you want to get reverse\n\n");
    scanf("%d", &n);
    /*using while loop */
    while (n != 0)
    {
        rem = (n % 10);     /*to use the last digit of number*/
        y = (y * 10 + rem);     /*to print last digit on first*/
        n = (n / 10);   /*to eliminate last digit so we can use the number further*/
    }
    printf("\nReversed number is %d",y);
    getch();
}
/*for further quarry DM me on instagram at @seemitkumar.j*/