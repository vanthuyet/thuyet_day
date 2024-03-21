#include<stdio.h>
int main(){
	int i=1,dem=0,so;
	float tong=0,tbc; 
	printf("\nMoi nhap 1 so:");
	scanf("%d",&so);
	while(i<so){
		if(i%3==0){
			printf("%3d",i);
			tong+=i; 
			dem++; 
		}i++; 
	}
	printf("\nGia tri cua tong la:%f",tong);
	printf("\nTrung binh cong la:%.2f/%.2d=%.2f",tong,dem,tong/dem);
	return 0; 
} 
