#include <stdio.h>

int main() {
    int num, reversed = 0, remainder,num1;

   
    printf("Enter a number: ");
    scanf("%d", &num);
    num = num1;

    
    while (num != 0) {
        remainder = num % 10;           
        reversed = reversed * 10 + remainder;  
        num /= 10;                      
    }
    if (reversed == num1){
    	printf("Palindrome");
   	}
   	else{
   		printf("Not Palindrome");
   		
	   }
    return 0;
}





