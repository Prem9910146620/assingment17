

#include<string.h>
#include<stdio.h>
int main()
{    char a[150];
    int i=0,c=0,d=0,m=0;
    printf("enter the character\n");
    fgets(a,150,stdin);


    for(i=0;a[i]!='\0';i++)
    {  if(a[i]>='a'&&a[i]<='z'||a[i]>='A'&&a[i]<='Z')
         { c++; }
         else
         if(a[i]>='0'&&a[i]<='9')
          d++;
         else
            m++;
       }

      printf("alphabet-%d\n digits-%d\n special-%d",c,d,m-1);



    return 0;

}
