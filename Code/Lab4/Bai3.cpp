#include<stdio.h>
int main(){
	int x,dem=0;
	printf("Moi nhap vao so :");
	scanf("%d",&x);
	int i=1;
	for(i=1;i<x;i++){
	
		if(i*i==x){
			dem++;
			break;
		}
    }
	if(dem==0){
		printf("%d khong phai la so chinh phuong",x);
	}else{
		printf("%d la so chinh phuong");
	}
	return 0;
}



