#include<stdio.h>

int main(){
	int evensum= 0;
	int oddsum = 0;
	int i;
	for (i = 1; i <=20 ;i++){
		
			
		if(i%2 == 0){
			evensum = evensum + i;
		}
		else{
			oddsum = oddsum + i;
		}
	}
	
	printf("The sum of even numbers is %d\n" ,evensum);
	printf("The sum of odd numbers is %d", oddsum);
	
	return 0;
	
	
}
