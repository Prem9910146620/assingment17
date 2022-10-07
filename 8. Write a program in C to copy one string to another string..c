
#include<string.h>
#include<stdio.h>
int main()
{    char str[150],j[150];
    int i=0,c=0;
    printf("enter the character\n");
    fgets(str,150,stdin);


    while(str[i]!='\0')
    {  if(str[i]>='a'&&str[i]<='z')
            j[i]=str[i];
           c++;
        i++;
    } printf(" copy in another string\n");

    printf("%s",j);



    return 0;
}
