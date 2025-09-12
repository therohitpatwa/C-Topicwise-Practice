#include<stdio.h>
#include<stdarg.h>
void print(int size,...)
{
   va_list args;
   va_start(args,size);
   for(int i=0;i<size;i++)
   {
     int  value=va_arg(args,int);
      printf("%d",value);
   }
   va_end(args);

}
void main()
{
   print(4,    1,2,3,4);
}