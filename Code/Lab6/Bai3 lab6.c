#include<stdio.h>
int main(){
	int n,i,j,temp;
	printf("Moi nhap vao so phan tu mang:");
	scanf("%d",&n);
	int mang[n];
	for(i=0;i<n;i++){
		printf("Moi nhap vao gia tri cua mang:");
		scanf("%d",&mang[i]);
	}
	printf("\n");
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(mang[i]<mang[j]){
				temp=mang[j];
				mang[j]=mang[i];
				mang[i]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
	printf("Xua gia tri mang sau sap xep cua [%d] la : %d:\n",i,mang[i]);
    }
	return 0;
}
