#include<stdio.h>
int main()
{

    int amt, n200, n500, n100;
    printf("Enter amount: ");
    scanf("%d", &amt);
    n200 = amt / 200;
    amt = amt % 200;
    n500 = amt / 500;
    amt = amt % 500;
    n100 = amt / 100;
    amt = amt % 100;
    printf("200 notes: %d\n500 notes: %d\n100 notes: %d\nRemaining: %d\n", n200, n500, n100, amt);
return 0;
}