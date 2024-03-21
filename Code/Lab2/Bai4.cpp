#include<stdio.h>
int main(){
//B4 Nhap diem Toan Ly Hoa roi tinh diemTB
	float toan,ly,hoa,diemTB;
	printf("moi nhap diem toan:");
	scanf("%f",&toan);
	printf("moi nhap diem ly:");
	scanf("%f",&ly);
	printf("moi nhap diem hoa:");
	scanf("%f",&hoa);
	diemTB = (toan*3+ly*2+hoa)/3;
	printf("\nDiem trung binh la:%.2f",diemTB);
	return 0;
	}
	
