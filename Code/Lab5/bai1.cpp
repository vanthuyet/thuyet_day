#include<stdio.h>
float traVe(float a,float b,float c);
	int main(){
	float so1,so2,so3,max;
	printf("Nhap vao so thu nhat:");
	scanf("%f",&so1);
	printf("Nhap vao so thu hai:");
	scanf("%f",&so2);
	printf("Nhap vao so thu ba:");
	scanf("%f",&so3);
	max=traVe(so1,so2,so3);
	printf("So lon nhat la:%.f",max);
	return 0;
}
float traVe(float a,float b,float c){
	float max;
	max=a;
	if(max<b){
		max=b;
	}
	if(max<c){
		max=c;
	}
	return max;
}
