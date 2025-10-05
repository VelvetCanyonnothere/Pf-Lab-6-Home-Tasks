#include<stdio.h>

int main(){
	
	int num,sum =0 ,remainder, rem,num2;
	printf("enter num");
	scanf("%d",&num);
	
	num2 = num;
	
	while (num !=0){
		remainder = num% 10;
		rem = remainder* remainder * remainder;
		sum = sum + rem;
		num = num / 10;
	}
	if (num2 == sum ){
		printf("Armstrong");
		
	}
	else{
		printf("Not Armstrong number");
	}
	return 0 ;
	
}
