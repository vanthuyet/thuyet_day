#include<stdio.h>
//tinh tb so le chia het cho 5 
int main(){
	int dem,i=0; 
	float n,tb,tong;
	printf("Moi ban nhap vao 1 so:");
	scanf("%f",&n);
	while(i<=n){
	    if(i%5==0&&i%2!=0){
			printf("%3d",i);
			tong+=i;
			dem++; 
			
		}i++; 
	}
	tb=tong/dem; 
	printf("\nGia tri tong la:%.2f",tong);
	printf("\nGia tri tung binh cong:%.2f",tb) ;
	return 0; 
	 
} 
