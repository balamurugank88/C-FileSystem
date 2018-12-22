#include"filesystem.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
static int *ptr;
long long norm (long long bytes)
{    
/*        long long norb=1;
        while(norb<bytes)
        {
        norb*=2;
        if(norb==bytes)
        break;
        if(norb>bytes)
        {
        norb/=2;
        break;
        }
        }
return norb;*/
}
int init1()
{

 /*printf("Enter the amount of space(bytes) to be allocated\n");
        do
        {
                scanf("%lld",&a);
                a=norm(a);
                if(a> 536870912 || a<=18882560)
                        printf("Enter another value\n");

        }while(a>536870912 || a<=18882560);
        a=67108864;
	ptr = malloc(a);
	if(ptr==NULL)
	printf("Not Allocated");
        printf("The Allocated space is%lld MB\n",a/1048576);
        b=a/9441280;
        printf("The Number of block groups required =%lld\n",b);*/
      
return 0;

}


int write(int blknumber,int buffer1[256])
{
memcpy((int *)((int)ptr+blknumber),buffer1,1024);
return 0;
}
int read(int blknumber,int buffer1[256])
{
memcpy(buffer1,(int *)((int)ptr+blknumber),1024);
return 0;
}

