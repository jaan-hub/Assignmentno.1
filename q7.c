#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter 1 No");
    scanf("%d",&a);
    printf("Enter 2 No");
    scanf("%d",&b);
   printf("after swapping  %d%d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("a=%d,b=%d",a,b);
return 0;
}