#include<stdio.h>
#define PI  3.14
int main(){
	int R;
	printf("moi nhap ban kinh:");
	scanf("%d",&R);
	float cv,dt;
	cv=PI*(2*R);
	dt=PI*PI*R;
	printf("cv hinh tron la:%.2f",cv);
	printf("\ndt hinh tron la:%.2f",dt);
	return 0;
	}
