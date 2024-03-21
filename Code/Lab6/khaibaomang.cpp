#include<stdio.h>
int main(){
	int a[10],x;
	for(int i=0;i<10;i++){
	printf("Moi nhap vao gia tri mang [%d]:",i);
	scanf("%d",&a[i]);
	}
	printf("\n");
	for(int i=0;i<10;i++){
		printf("Gia tri cua mang [%d] la:%d\n",i,a[i]);
	}
	printf("\n");
	printf("Moi nhap gia tri can tim:");
	scanf("%d",&x);
	for(int i=0;i<10;i++){
	    if(x==a[i]){
		printf("\n%d cos trong mang phan tu thu %d",x,i);
		break;
		
		
	}
}
return 0;
}

