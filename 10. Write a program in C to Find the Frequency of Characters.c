
#include<string.h>
#include<stdio.h>
int main()
{    char a[150];
    int i=0;
    int j[150]={ 0 };
    printf("enter the character\n");
    fgets(a,150,stdin);
    while(a[i]!='\0')
    {
        j[a[i++]]++;

    }

           for(i=0;i<150;i++)
  {      if(j[i]!=0)
       printf("%c ==> %d\n",i,j[i]);
        }

    return 0;
}
