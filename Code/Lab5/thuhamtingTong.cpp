#include<stdio.h>
void tinhTong1(int a,int b);int tinhTong3();
	
int main(){
	printf("Xuat tong\n");
	//tinhTong1(1,2);
	tinhTong3();
	
	return 0;
}
/*void tinhTong1(int a,int b){
	int tong;

	tong=a+b;
	printf("tong la :%d",tong);
	
}*/
int tinhTong3(){
	int a,b,tong;
	printf("NHAP a:");
	scanf("%d",&a);
	printf("NHAP b:");
	scanf("%d",&b);
	tong=a+b;
	printf("Tong:%d",tong);
	
	return tong;
	
	
}

