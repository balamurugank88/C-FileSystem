#include<stdio.h>
#include"filesystem.h"

int main()
{
int *ptr;
FILE *fptr;
ptr=malloc(b*9220);
fptr=fopen("filebackup.txt","r");
fread(ptr,b*9220,1,fptr);
fcloseall();
return 0;
}

