#include<stdio.h>
int main(){
	float toan,ly,hoa;
	printf("diem ly:");
	scanf("%f",&ly);
	printf("diem hoa:");
	scanf("%f",&hoa);
	printf("diem toan:");
	scanf("%f",&toan);
	
	printf("Diem trung binh:%f",(toan*3+ly*2+hoa)/6);
	return 0;
	}
	
