#define _GNU_SOURCE
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>


int main()
{
 char *ptr = get_current_dir_name();
 
 if(ptr==NULL)
 {
   printf("error");
   exit(-1);
 }

 
    printf("%s\n",ptr);
   
return 0;
}
