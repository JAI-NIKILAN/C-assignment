#include<stdio.h>
int  main()
{
        int i;
        char a1[]="swathi";
        char a2[]="nikilan";
        char a3[100];
        int j=0;
        int len,len1;
        for(len=0;a1[len];len++);
  for(len1=0;a2[len1];len1++);

        for(i=0;i<len;i++)
        {
                a3[j++]=a1[i];
                a3[j++]=a2[i];
        }
   while(i<len)
        a3[j++]=a1[i++];
   while(i<len1)
        a3[j++]=a2[i++];
a3[j]='\0';
//      for(i=0;a3[i];i++)// if we need to print each character from loop
                printf("%s",a3);
        }


