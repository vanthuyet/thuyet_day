#include<stdio.h>
int main(){
	 int so;
	 int i;
	 printf("Moi nhao vao 1 so :");
	 scanf("%d",&so);
	 int dem=0;
	for(i=2;i<so/2;i++){
		if(so%i==0){
			dem++;
			break;
    }
	}
	if(dem==0){
		printf("%d la so nguyen to",so);
    }else{
    	printf("%d khong phai la so nguyen to",so);
	}
	return 0; 
	}
