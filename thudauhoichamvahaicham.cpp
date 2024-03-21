#include<stdio.h>
int main(){
	int so; 
	//tim so chan le
	printf("Nhap vao 1 so:");
	scanf("%d",&so);
	
	printf("%d la so %s",so,(so%2==0)?"CHAN":"LE");
	printf("\nKet thuc chuong trinh"); 
	return 0; 
} 
