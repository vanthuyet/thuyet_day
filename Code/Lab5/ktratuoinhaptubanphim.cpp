#include<stdio.h>
int main(){
	int tuoi;
	do{
		printf("Moi nhap vao tuoi:");
		scanf("%d",&tuoi);
	}while(tuoi<1 || tuoi>120);
	printf("Tuoi cua ban la: %d",tuoi);
	return 0;
}
