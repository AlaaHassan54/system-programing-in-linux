#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#define COUNT 100

int main(int argc,char *argv[])
{

char buf[COUNT];

if(argc!=3)
{
   printf("number of argument doesn't match\n");
   exit(-1);
}

int source_fd = open(argv[1],O_RDONLY);


if(source_fd<0)
{
  printf("open source file failed\n");
  exit(-2);
}


int dest_fd = open(argv[2],O_WRONLY|O_CREAT| O_TRUNC,0644);

if(dest_fd<0)
{
  printf("open destination file failed\n");
  exit(-4);
}


int num_read;

while((num_read = read(source_fd,buf,COUNT))>0)
{
  
if(write(dest_fd,buf,num_read)<0)
{
   printf("write failed");
   exit(-3);
}
 
}


close(source_fd);
close(dest_fd);


return  0;
}
