#include<stdio.h>
int checkYear(int year);

int main(){
	int a,nam,co;
	
	printf("Moi nhap vao nam:");
	scanf("%d",&a);
	nam=checkYear(a);
	if(nam==1){
		printf("%d la nam Nhuan",a);
	}else{
		printf("%d ko phai la nam Nhuan",a);
	}
	
	return 0;
}
int checkYear(int year){
	int co=0;
	if(year%400==0){
		co++;
	}
	if(year%4==0&& year%100!=0){
		co++;
	}
	return co;
	
	
}
