
#include<stdio.h>
int main()
{
   char s[100],i=0;
   printf("Enter your name: ");
   scanf("%[^\n]s",s);
     for(i=0;s[i]!='\0';i++)
   {
       
       printf("%c",s[i]);
       
       if(s[i]==' ')
       printf("\n");
       
   }
   
   return 0;
}
