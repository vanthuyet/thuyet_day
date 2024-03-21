#include<stdio.h>
int main(){
	float i;
	printf("Nhap i:");
	scanf("%f",&i);
	if(i==(int)i){
		printf("%.2f la so nguyen",i); 
	}else
	printf("%.2f ko phai la so nguyen",i);
	return 0; 
} 
 
