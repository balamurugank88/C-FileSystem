#define FUSE_USE_VERSION 26
#include"filesystem.h"
#include <fuse/fuse.h>
#include<stdio.h>
#include<string.h>
#include<errno.h>
#include<fcntl.h>


static int hello_getattr(const char *path, struct stat *stbuf)
{ 

printf("Hello");
return 0;

}

static int hello_readdir(const char *path, void *buf, fuse_fill_dir_t filler,
                         off_t offset, struct fuse_file_info *fi)
{
	printf("Read DIR\n");
	return 0;
}

static int hello_open(const char *path, struct fuse_file_info *fi)
{
	printf("Open\n");
	return 0;
}
static int hello_read(const char *path, char *buf, size_t size, off_t offset,
                      struct fuse_file_info *fi)
{	
	printf("Read\n");
	return 0;

}
/*static int makedir(const char *path,mode_t mode)
{
	printf("Make DIR\n");
	return 0;

}
*/
static struct fuse_operations hello_oper = {
    .getattr=hello_getattr,
    .readdir=hello_readdir,
    .open=hello_open,
    .read=hello_read,
/*    .mkdir=makedir,*/

};
/*struct blkops file_oper1 = {
.blkwrite       = write,
.blkread        = read,
};
*/

int main(int argc, char *argv[])

{	
/*	int retval;
	form(&file_oper1);
printf("HELOOO");
    
retval =fuse_main(argc, argv, &hello_oper,NULL);
if(-1==retval) perror ("fusemain failed:");
return (retval);*/
return (fuse_main(argc, argv, &hello_oper,NULL));

}


