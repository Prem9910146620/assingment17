
#include<string.h>
#include<stdio.h>
int main()
{
     char str[150],j[150];
    int i=0,c=0;
    printf("enter the uppercase character\n");
    fgets(str,150,stdin);


    while(str[i]!='\0')
    {  if(str[i]>='A'&&str[i]<='Z')
            j[i]=str[i]+32;
           c++;
        i++;
    } printf("lowercase\n");
 for(i=0;i<=c;i++)
    { printf("%c",j[i]); }

    return 0;
}
