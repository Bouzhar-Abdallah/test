#include <stdio.h>
#include <stdlib.h>

struct threeNum
{
   int n1=10, n2=20, n3=30;
};

int main()
{
   int n=1;
   struct threeNum num;
   FILE *fptr;

   if ((fptr = fopen("usertest.bin","wb")) == NULL){
       printf("Error! opening file");

       // Program exits if the file pointer returns NULL.
       exit(1);
   }

  
      fwrite(&num, sizeof(struct threeNum), 1, fptr); 
   
   fclose(fptr); 
  
   return 0;
}
