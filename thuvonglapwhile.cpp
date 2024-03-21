#include<stdio.h>
int main(){
	int i=0,tong=0;
	printf("Tong cac so tu 1-->10");
	while(i<=1000){
	printf(" %5d",i);	
	tong+=i;
	i++;	
	} 
	printf("\nTong co gia tri la:%d",tong);
	return 0; 
	 
	 
} 
