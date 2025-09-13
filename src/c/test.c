#include<stdio.h>
void main()
{
   char str[30];
   scanf("%[^\n]%*c",str);
   printf("%s",str);

}