#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	int a=5,b=10;
	int max = math.max(a,b);
	printf("Tong:%d",max);
	double x= sqrt(9);
	printf("  %.0lf",x);
	double y=ceil(1.6);
	printf("\n  %.0lf",y);
	double z= floor(1.6);
	printf("\n   %.lf",z);
	double m= abs(-7);
	printf("\n   %.lf",m);
	//Ham round neu so co phan thap phan =.5 thi lam tron len
	//Ham round neu so co phan thap phan <.5 thi lam tron xuong
	double a= round(6.7);
	printf("\n   %.lf",a);
	
	return 0;
	
	
	
}
