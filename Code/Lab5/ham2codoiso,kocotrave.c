#include<stdio.h>
//Ham co doi so truyen vao ,khong co gia tri tra ve
//Vi du: Ham kiem tra so nguyen to
void ktrasoNgto(int x){
	int i=2,dem=0;
	for(;i<x/2;i++){
		if(x%i==0){
			dem++;
			break;
		}
	}
	if(dem==0){
		printf("%d la so nguyen to",x);
	}else{
		printf("%d khong phai la so nguyen to",x);
	}
}



int main(){
	ktrasoNgto(25);
	
	return 0;
}
