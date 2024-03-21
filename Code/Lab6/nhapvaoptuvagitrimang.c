#include<stdio.h>
int main(){
	int i,j,n,temp;
	printf("Moi nhap vao so phan tu mang:");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++){
		printf("Moi nhap vao gia tri phan tu cua mang vi tri thu arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
				temp=arr[j];
				arr[j]=arr[i];
				arr[i]=temp;
			}
		}
	}for(i=0;i<n;i++){
		printf("Gia tr cua [%d] la: %d\n",i,arr[i]);
	//Xuat du lieu ra man hinh
	//Cach 1
	//printf("Lay du lieu thu 3 ra man hinh:%d",arr[2]);
	//cach 2
	
	}
	return 0;
}
