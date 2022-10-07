

#include<string.h>
#include<stdio.h>
int main()
{    char a[150],t;
    int i=0,j[150]={0};
    printf("enter the character\n");
    fgets(a,150,stdin);
    while(a[i]!='\0')
    {
        j[a[i++]]++;
    }
    printf("ascending order is ");
           for(i=0;i<150;i++)
  { if(j[i]!=0)
      printf("%c",i); }

    return 0;
}
