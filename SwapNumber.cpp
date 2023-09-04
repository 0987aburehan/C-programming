#include<stdio.h>
int main(){
	int a, b,t ;
	
	printf("enter the value of a : ");
	scanf("%d",&a);
	
	printf("enter the value of b : ");
	scanf("%d",&b);
	
	int c;
	c=a ;
	a=b ;
	b=c ;
	
	printf("After swapping 'a' = %d \n",a);
	printf("After swapping 'b' = %d \n",b);
	
	return 0;
	
} 
