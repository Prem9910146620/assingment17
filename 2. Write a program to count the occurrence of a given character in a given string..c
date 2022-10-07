#include<string.h>
#include<stdio.h>
int main()
{
    char str[150],j;
    int i=0,c=0;
    printf("enter the character\n");
    fgets(str,150,stdin);
    printf("enter a character to check the occurrence\n");
    scanf("%c",&j);
    while(str[i]!='\0')
    {  if(str[i]==j)
           {c++;}
        i++;
    }

    printf(" length is %d",c);
    return 0;
}
