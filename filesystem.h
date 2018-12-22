#define BLK 8192

long long a,b;
struct __attribute__((aligned(1024))) bgdt
{
	int *ptr2iab;
	int *ptr2bab;
	int *ptr2intab;

}blkgrpdt;
struct __attribute__((aligned(1024))) superblock
{
int tfdbs;
int tfins;
int blksz;
}sprblk;
struct __attribute__((aligned(128))) inodetab
{
	int inumber;
	int filemode;
	int uid;
	int isize;
	int grpid;
	int fileflags;
	int fragnumber;
	int fragaddress;
	int fragsize;
}inode;

struct __attribute__((aligned(1024))) direntry 
{
	int inodenumber;
	int reclength;
	int namelength;
	char name[255];
	int filetype;
}dirent;
int IAB[256];
int BAB[256];
 
struct blkops
{
int(* blkwrite)(int blkno,int buffer[256]);
int(* blkread)(int blkno,int buffer[256]);
};

int write(int , int buffer1[256]);
int read(int ,int buffer1[256]);










