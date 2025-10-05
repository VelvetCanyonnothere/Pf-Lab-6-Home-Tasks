#include<stdio.h>

int main(){
	int num,i;
	int power;
	int out =1; 
	
	printf("Enter the number:\n");
	scanf("%d", &num);
	printf("Enter the power:\n");
	scanf("%d", &power);
    
	for( i= 1; i<= power ; i++ ){
		
		out = out*num;
		
	}
	printf("The power of your number is %d", out);
	return 0;
}
