#include<stdio.h>
#include<conio.h>
void main()
{
char c;
printf("enter the character");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u')
{
printf("vowel");
}
else
{
printf("consonant");
}
getch();
}
