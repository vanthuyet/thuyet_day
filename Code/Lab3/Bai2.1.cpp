#include<stdio.h>
int main(){
	//Giai phuong trinh co dang ax+b =0
	//Input: Nhap vao tu man hinh gia tri a,b
	//Output:Hien thi nghiem cua phuong trinh
	double a,b,x;
	printf("Moi nhap vao gia tri a:");
	scanf("%lf",&a);
	printf("Moi nhap vao gia tri cua b:");
	scanf("%lf",&b);
	if(a==0){
		//TH1: b=0
		if(b==0){
			printf("Phuong trinh co vo so nghiem(luon dung)");
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}else{
		x=-b/a;
		printf("Phuong trinh co nghiem la:%lf",x);
	}
	return 0;
	}	
