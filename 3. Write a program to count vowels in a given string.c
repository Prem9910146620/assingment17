
#include<string.h>
#include<stdio.h>
int main()
{    char str[150],a,e,i,o,u;
    int d=0,c=0;
    printf("enter the character\n");
    fgets(str,150,stdin);


    while(str[d]!='\0')
    {  if(str[d]=='a'||str[d]=='e'||str[d]=='i'||str[d]=='o'||str[d]=='u')
           {c++;}
        d++;
    }

     printf("total vowels is %d",c);


    return 0;
}
