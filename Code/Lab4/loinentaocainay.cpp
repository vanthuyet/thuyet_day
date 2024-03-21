#include<stdio.h>
int main(){
	int n,i,dem=0;
	printf("Moi nhap mot so:");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(i*i==n){
			dem++;
			break;
		}
	}
	if(dem ==0){
		printf("%d la so chinh phuong",n);
    }else{
    	printf("%d khong phai la so chinh phuong",n);
	}
	return 0;
}
