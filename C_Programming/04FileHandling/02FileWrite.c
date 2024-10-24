#include<stdio.h>


/*
	Write = w
	append = a
*/

int main(){
	
	FILE *p;	
	p = fopen("test.txt", "w");
//	p = fopen("test.txt", "a");
	
	if(p == NULL){
		printf("Not Found");
		
	}
	else{
		printf("Success \n");
//		fputs("\n", p);
		fputs("Hello Yash", p);
		fclose(p);
	}
	
	
	return 0;
}
