#include<stdio.h>
int main(){
	//lenh re nhanh if
	//Bien luan de giai phuong trinh ax + b= 0
	//Input:Nhap vao a,b
	//Output:Xuat ra gia tri x
	//Process: xu ly ket qua
	double a,b,x;
	printf("Xin moi nhap vao a:");
	scanf("%lf",&a);
	printf("Xin moi nhap vao b:");
	scanf("%lf",&b);
	if(a==0){
		//TH1:b=0
		//TH2:b!=0
		if(b==0){
			printf("Phuong trinh co vo so nghiem");
		}else{
			printf("Phuong trinh vo nghiem");
		}	
	}else{
		x= -b/a;
		printf("Phuong trinh co nghiem la :%lf",x);
	}
	
	
	return 0;
	}
	
