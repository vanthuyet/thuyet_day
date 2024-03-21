#include<stdio.h>
int main(){
	float diem;
	//lenh nhap diem
	do{
	
	printf("Moi nhap diem cua ban:");
	scanf("%f",&diem);
	}while(diem<0||diem>10);
	if(diem>0||diem<10){
		printf("Ban da nhap dung"); 
	} 
	return 0; 
} 
