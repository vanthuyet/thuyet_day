#include<stdio.h>
int main(){
	int Dem=0,i=1,n;
	float  tong=0,tb;
	printf("Moi nhap vao 1 so:");
	scanf("%d",&n);
	while(i<n){
		if(i%3==0){
			printf("%3d");
			tong+=i;
			Dem++; 
		} i++; 
	}
	tb=tong/Dem;
	printf("\nTong la:%.2f",tong);
	printf("\nTrung binh la:%.2f",tb);
	return 0; 
} 
