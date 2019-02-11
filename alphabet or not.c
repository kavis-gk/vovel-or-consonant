#include<stdio.h>
void main()
{
char k;
printf("character");
scanf("%c",&k);
if(k>='a' && k<='z')
{
printf("%c alphabet",k);
}
else
{
printf("%c not alphabet",k);
}
getch();
}
