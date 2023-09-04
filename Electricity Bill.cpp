#include<stdio.h>
int main(){
	
	int unit;
	
	printf("Enter Total Units Used : ");
	scanf("%d", &unit);
	
	int Bill;
	Bill= unit*10 ;
	
	printf("Your Total bill is : %d",Bill);
	
	return 0;
}
