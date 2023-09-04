#include<stdio.h>
int main(){
	
	int phy,chem,math,eng,comp,percentage ;
	
	printf("enter physics marks : ");
	scanf("%d", &phy);
	
	printf("enter chemistry marks : ");
	scanf("%d", &chem);
	
	printf("enter math marks : ");
	scanf("%d",&math);
	
	printf("enter english marks : ");
	scanf("%d", &eng);
	
	printf("enter computer marks : ");
	scanf("%d",&comp);
	
	percentage = (phy+chem+eng+math+comp)/5 ;
	printf("Your Percentage is : %d", percentage);
	
	return 0;
}
