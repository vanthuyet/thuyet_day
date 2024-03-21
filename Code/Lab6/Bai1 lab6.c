#include<stdio.h>
int main(){
	int n,i;
	printf("Moi ban nhap vao so phan tu mang:");
	scanf("%d",&n);
	int mang[n];
	for(i=0;i<n;i++){
		printf("Moi ban nhap vao gia tri trong mang:");
		scanf("%d",&mang[i]);
	}
	float tong,tb;
	int dem=0;
	for(i=0;i<n;i++){
		if(mang[i]%3==0){
			tong+=mang[i];
			dem++;
		}
	}
	if(dem>0){
		tb=tong/dem;
		printf("co the thuc hien duoc\n:");
		
	}else{
		printf("ko thuc hien duoc\n");
	}
	printf("Gia tri cua tong la: %.2f\n",tong);
	printf("Gia tri cua  tb la :%.2f",tb);
	return 0;
	
	
}
