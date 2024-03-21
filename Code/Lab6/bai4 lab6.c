#include<stdio.h>
int main(){
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
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			mang[i][j]= mang[i][j] * mang[i][j];
			printf("Gia tri binh phuong cua [%d][%d] la:%d\n ",i,j,mang[i][j]);
	    }
	}
	return 0;
}
