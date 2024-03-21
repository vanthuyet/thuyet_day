#include<stdio.h>
int main(){
	int n,i;
	printf("Moi nhap vao so phan tu:");
	scanf("%d",&n);
	int mang[n];
	for(i=0;i<n;i++){
		printf("Moi nhap vao gia tri phan tu mang [%d]:",i);
		scanf("%d",&mang[i]);
	}
	int max=mang[0],min=mang[0];
	for(i=0;i<n;i++){
		if(mang[i]>max){
			max=mang[i];
		}
	}
	for(i=0;i<n;i++){
		if(mang[i]<min){
			min=mang[i];
		}
	}
	printf("MAX:%d\n",max);
	printf("MIN:%d\n",min);
	return 0;
}

