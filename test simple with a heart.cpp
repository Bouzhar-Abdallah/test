#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
struct user {
		int id;
		char first_name[10];
		char last_name[10];
	//	char* password;
	}u;
FILE *P;
int main(){
	
	user u;
	printf("\n\n\tENTER YOUR FIRST NAME:\n");
	printf("\n\t*****************************************************************\n");
	printf("\t***                                                           ***");
	printf("\n\t                    ");
	fflush(stdin);
	gets(u.first_name);
	
	printf("\n\n\tENTER YOUR LASTE NAME:\n");
	printf("\n\t*****************************************************************\n");
	printf("\t***                                                           ***\n");
	printf("\n\t                    ");
	fflush(stdin);
	gets(u.last_name);
	
	
			P=fopen("users.bin","ab");
			
			
			
			fwrite(u.first_name,1,10,P);
			

			fwrite(u.last_name,1,10,P);
			

			
			fclose(P);
		char memory_test[200];
		P=fopen("users.bin","ab");	
		//fseek(P, 0, SEEK_SET);
	fread(memory_test,1,100,P);
        	printf("\n\t%s",memory_test);
        	

            fread(u.last_name,1,10,P);
        	printf("\n\t%s",u.last_name);
 
	fclose(P);
	
	return 0;
}
