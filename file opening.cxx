#include <stdio.h>
int main()
 {
  
  FILE*fptr;
  fptr = fopen("for.cxx","r");
  if(fptr !=NULL)
  {
   printf("file open successful\n");
  fclose(fptr);
  }
  {
   else printf("file open unsuccessful\n");
  }
  	
 return 0;	
 }