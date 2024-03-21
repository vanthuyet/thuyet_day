#include<stdio.h> 
int main(){
	//Khai bao bien 
	int Dem=0,min,max;
	float  tong=0,tb;
	printf("Moi nhap vao MIN:");
	scanf("%d",&min);
	printf("Moi nhap vao MAX:"); 
	scanf("%d",&max); 
	//Xu ly  
	while(min<=max){
		if(min%3==0){
			printf("%3d");
			tong+=min; //tonh=tong+i  
			Dem++; 
		}min++; 
	}
	//output:gia tri tong va trung binh 
	tb=tong/Dem;
	printf("\nTong la:%.2f",tong);
	printf("\nTrung binh la:%.2f",tb);
	return 0; 
} 
