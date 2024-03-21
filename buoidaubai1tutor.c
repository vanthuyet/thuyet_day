#include<stdio.h>
int main(){
	int a,b,c,tong,hieu;
	float tich,thuong;
	printf("Moi nhap vao so a:");
	scanf("%d",&a);
	do{
	printf("Moi nhap vao so b:");
	scanf("%d",&b);
	printf("Moi nhap vao so c:");
	scanf("%d",&c);
    }while(b==0||c==0); 
	tong=a+b+c;
	hieu=a-b-c;
	tich=a*b*c;
	//dau"=" là phep gan
	//dau"=="là phep so sanh  (la bang)
	if(b,c==0){
		printf("b,c phai khac 0"); 
	}
	
	 
	thuong=(float)a/b/c;
	printf("\nTong la:%d",tong);
	printf("\nHieu la:%d",hieu);
	printf("\nTich la:%.2f",tich);
	printf("\nThuong la:%.2f",thuong);
	if(b,c==0){
		printf("b,c phai khac 0"); 
	}
    
	return 0; 
} 
