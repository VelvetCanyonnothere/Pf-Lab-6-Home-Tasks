#include<stdio.h>

int main(){
	
	int num,i,table;
	char agree;
	
	printf("Enter the number ");
	scanf("%d",&num);
	
	do {
		for (i = 1; i <= 10 ; i++ ){
			table  = num * i ;
			printf("%d x %d = %d \n" , num,i,table);
		}
	   printf("Do you want to get a new table? Enter Y or N \n");
	   scanf(" %c", &agree);
	}while( agree == 'Y' || agree == 'y');
	
	return 0;
}
