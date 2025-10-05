#include<stdio.h>

int main(){
	int n;
	int first = 0,second = 1;
	int next;
	int i ;
	
	printf("Enter the number till you want the seqeunce");
	scanf("%d",&n);
	
	for( i = 0 ; i < n ; i++){
		printf("%d ", first);
        next = first + second;
        first = second;
        second = next;
	}
	return 0;
		
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

