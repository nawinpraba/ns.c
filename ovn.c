#include<stdio.h>
#include<conio.h>
int main()
{
int num,pal=0,temp;
printf("Enter a Number \n");
scanf("%d",&num);
temp=num;
while(num)
{
pal=pal*10+(num%10);
num=num/10;
}
if(pal==temp)
    printf("Palindrome");
else
    printf("No");
return 0;
}
