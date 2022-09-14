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
	char memory_test[500];
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
			
			//fseek(P, 0, SEEK_END);
			
			fwrite(u.first_name,1,10,P);
			

			fwrite(u.last_name,1,10,P);
			

			
			fclose(P);
	
	return 0;
}
