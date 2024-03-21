#include<stdio.h>

void hoanVi(int *x,int *y){
	int trungGian;
	trungGian=*x;
	*x=*y;
	*y=trungGian;
}
int main(){
	int a,b;
	printf("Gia tri cua a:");
	scanf("%d",&a);
	printf("Gia tri cua b:");
	scanf("%d",&b);
	printf("\nGia tri trc khi hoan vi %d",a);
	printf("\nGia tri trc khi hoan vi %d",b);
	hoanVi(&a,&b);
	printf("\nGia tri sau khi hoan vi %d",a);
	printf("\nGia tri sau khi hoan vi %d",b);
	return 0;
	
}
