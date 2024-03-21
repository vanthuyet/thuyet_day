#include<stdio.h>
int main(){
	int a,b,min,max;
	printf("Nhap vao a:"); scanf("%d",&a); 
	printf("Nhap vao b:"); scanf("%d",&b);
	min=(a<b)?a:b;
	max=(a>b)?a:b;
	printf("\ngia tri nho nhat:%d",min);
	printf("\ngia tri lon nhat :%d",max); 
	return 0; 
	 
	 
} 
