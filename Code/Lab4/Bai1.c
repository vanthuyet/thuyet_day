#include<stdio.h>
int main(){
	int min,max,dem=0,tong=0;
	float tb=0;
	printf("Moi nhap vao MIN:");
	scanf("%d",&min);
	printf("Moi nhap vao MAX:");
	scanf("%d",&max);
	while(min<=max){
		if(min%2==0){
			tong+=min;
			dem++;
		}min++;
	}
	tb=tong/dem;
	printf("Tong la:%d\n",tong);
	printf("Trung binh la:%.2f",tb);
	return 0;
}
