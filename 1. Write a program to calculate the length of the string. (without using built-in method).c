#include<string.h>
#include<stdio.h>
int main()
{
    char str[150];
    int i=0,c=0;
    printf("enter the character\n");
    fgets(str,150,stdin);
    while(str[i]!='\0')
    {

        c++;
        i++;
    }

    printf(" length is %d",(c-1));
    return 0;
}
