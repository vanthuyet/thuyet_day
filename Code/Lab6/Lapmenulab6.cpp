#include<stdio.h>
void bai1();void bai2();void bai3();void bai4();
int main(){
	int chon;
	do{
	printf("++--------------------Menu------------------------------++\n");
	printf("++Bai1:Tinh trung binh tong 3 so                        ++\n");
	printf("++Bai2:Tim gia tri lon nhat va nho nhat trong mang      ++\n");
	printf("++Bai3:Sap xep mang theo thu tu giam dan                ++\n");
	printf("++Bai4:Tinh binh phuong cac phan tu trong mang 2 chieu  ++\n");
	printf("++Chon 5:Thoat.                                                 ++\n");
	printf("++------------------------------------------------------++\n");
	printf("__Moi ban chon 1 chuong trinh__:");
	scanf("%d",&chon);
	switch(chon){
		case 1: 
		bai1();
		break;
		case 2: 
		bai2();
		break;
		case 3: 
		bai3();
		break;
		case 4: 
		bai4();
		break;
		case 5:
			printf("Ban da thoat");
	}
    }while(chon!=5);
	return 0;
}
void bai1(){
	int i,n,dem=0;
	float tb=0,tong=0;
	do{
	printf("Moi nhap vao so phan tu:");
	scanf("%d",&n);
	int mang[n];
	for(i=0;i<n;i++){
		printf("Moi nhao vao gia tri phan tu mang [%d]:",i);
		scanf("%d",&mang[i]);	
	}
	for(i=0;i<n;i++){
		if(mang[i]%3==0){
			tong+=mang[i];
			dem++;
			}
	}
	if(dem>0){
		printf("Hop le\n");
		tb=tong/dem;
		printf("Gia tri trung binh la:%.2f\n",tb);
	}else{
		printf("Khong hop le,moi nhap lai\n");
	}
    }while(dem<=0);	
}
void bai2(){
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
}
void bai3(){
	int n,i;
	printf("Moi nhap vao so phan tu:");
	scanf("%d",&n);
	int mang[n];
	for(i=0;i<n;i++){
		printf("Moi nhap vao gia tri phan tu mang [%d]:",i);
		scanf("%d",&mang[i]);
	}
	int j,temp;
	for(i=0;i<n;i++){
		for(j=i+i;j<n;j++){
			if(mang[j]>mang[i]){
				temp=mang[j];
				mang[j]=mang[i];
				mang[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
	printf("Gia tri sau khi sap xep la:%d\n",mang[i]);
	}
}
void bai4(){
	int mang[100][100];
	int i,j,n,m;
	printf("Moi nhap vao du lieu ma tran:\n");
	printf("Moi nhap vao m:");
	scanf("%d",&m);
	printf("Moi nhap vao n:");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Moi nhap vao gia tri cac phan tu [%d][%d]:",i,j);
			scanf("%d",&mang[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Gia tri cua [%d][%d] la:%d\n",i,j,mang[i][j]);
		}
	}
	printf("\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mang[i][j]=mang[i][j]*mang[i][j];
			printf("Gia tri binh phuong cua [i][j] la:%d\n ",i,j,mang[i][j]);
	    }
	}
}
