// 9. Write a c program to read an amount and break the amount into 
// smallest possible of bank notes.
#include<stdio.h>
int main()
{
    int amount;
    scanf("%d",&amount);

    int hun_note = amount/100;
    amount = amount-100*hun;

    int fif = amount/50;
    amount = amount - 50*fif;

    int tw = amount/20;
    amount = amount-20*tw;

    int ten = amount/10;
    amount = amount-10*ten;

    int fi = amount/5;
    amount = amount-5*fi;

    int two = amount/2;
    amount = amount-2*two;

    int one = amount;

    printf("%d notes of 100.00 \n%d notes of 50.00 \n%d notes of 20.00 \n%d notes of 10.00 \n%d notes of 5.00 \n%d notes of 2.00 \n%d notes of 1.00",hun_notes,fif,tw,ten,fi,two,one);
    
    return 0;
}






