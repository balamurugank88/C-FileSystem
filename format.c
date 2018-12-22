#include"filesystem.h"
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>



int form(struct blkops *file_oper)
{	int i,j,k,chk=0,buffer[256],blknumber=0;
	
/*	
	 i=init1();	
	
		sprblk.tfdbs=1024*12*b-1;
		sprblk.tfins=1024*b-1;
		sprblk.blksz=BLK;
		
	
		
		for(i=0;i<b;i++)
		{	 blkgrpdt.ptr2iab=(int *)((i*9220)+2048);
			 blkgrpdt.ptr2bab=((int *)(i*9220)+3072);
			blkgrpdt.ptr2intab=(int *)((i*9220)+4096);
			
			blknumber=i*9220;
			
			memcpy(buffer,&sprblk,1024);
			
			file_oper->blkwrite(blknumber,buffer);
			
			
			blknumber=i*9220+1024;
			memcpy(buffer,&blkgrpdt,1024);
                         file_oper->blkwrite(blknumber,buffer);
			
			for(k=0;k<256;k++)
				IAB[k]=0;
			if(i==0)
				IAB[0]=IAB[0] | 0x40000000;
			
			blknumber=i*9220+2048;
			memcpy(buffer,&IAB,1024);
                         file_oper->blkwrite(blknumber,buffer);
			
			
			for(k=0;k<256;k++)
				BAB[k]=0;
			if(i==0)
				BAB[0]=BAB[0] | 0xF8000000;
			

			blknumber=i*9220+3072;
			memcpy(buffer,&sprblk,1024);
                         file_oper->blkwrite(blknumber,buffer);
			

			blknumber=i*9220+4096;
		 	for(j=0;j<1024;j++)
				{
				for(k=0;k<8;k++)
				{	inode.inumber=k+1+(i*9220);
					inode.filemode=0;
					inode.uid=0;
					inode.isize=0;
					inode.grpid=0;
					inode.fileflags=0;
					inode.fragnumber=0;
					inode.fragsize=0;
					inode.fragnumber=0;
					inode.fragaddress=0;
					if(i==0 && k==1)
					{
					inode.filemode=	0x4000;
					}
					memcpy((int*)(k*128+(int)buffer),&inode,128);
					 
				}	
					
	                         file_oper->blkwrite(blknumber,buffer);

				}
				

		}
 
	
	
	
*/

	return 0;
}
	

