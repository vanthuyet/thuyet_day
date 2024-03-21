#include<stdio.h>
int main(){
	int max,min,so,tong=0,dem; 
	//tính tong cac so chia het cho 2
	//bang cac gia tri min max nhap tu ban phim
	printf("Moi nhap gia tri min:");
	scanf("%d",&min);
	printf("Moi nhap gia tri max:");
	scanf("%d",&max);
	
	while(so<max){
		so=min; 
		if(min%2==0){
			printf("%8d",so);
			tong+=min;
			dem++; 
	} min++;
	} printf("\n dem:%2d",dem); 
	printf("\n gia tri tong la:%2d",tong); 
	return 0; 
} 
