
#include<string.h>
#include<stdio.h>
int main()
{ char a[150],t;
    int i=0,j;
    printf("enter the character\n");
    fgets(a,150,stdin);
     j=strlen(a)-1;

    while(i<=j)
    {   t=a[i];
       a[i]=a[j];
       a[j]=t;
         i++;
        j--;
    }

     printf("%s",a);



    return 0;
}
