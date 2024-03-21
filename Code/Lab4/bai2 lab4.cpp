#include"stdio.h"
int main(){
	int x,i,dem=0 ;
	printf("Nhap vao mot so:");
	scanf("%d",&x);
	for(i=2;i<x;i++){
		if(x%i==0){
			dem++; 
	   }
    }
	if(dem==0){
		printf("%d la so nguyen to",x); 
	}else{
		printf("%d khong phai la so nguyen to",x);
	}
	return 0; 
	 
} 
