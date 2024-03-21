#include<stdio.h>
void chucnang1();void chucnang2();void chucnang3();
int main(){
	int a;
	do{
	printf("______Menu__________\n");
	printf("Chuc nang 1:Thong tin ca nhan\n");
	printf("Chuc nang 2:Tinh tong cac so le chia het cho 5 tu---->N\n");
	printf("Chuc nang 3:Thong tin vaccine\n");
	printf("Chuc nang 4: Thoat.\n");
	printf(" Moi chon 1 chuc nang:");
	scanf("%d",&a);
	switch(a){
		case 1 : printf("Ban da chon chuc nang 1\n");
		chucnang1();
		break;
		case 2 : printf("Ban da chon chuc nang 2\n");
		chucnang2();
		break;
		case 3 : printf("Ban da chon chuc nang 3\n");
		chucnang3();
		break;
		case 4 : printf("Ban da chon chuc nang  Thoat");
		break;
	}
    }while(a!=4);
    	return 0;
}

void chucnang1(){
	char ten[30];
	int namsinh,cannang;
	printf("\nMoi nhap vao HO ten:");
	while(getchar()!='\n');
	gets(ten);
	printf("Moi nhap vao nam sinh:");
	scanf("%d",&namsinh);
	printf("Moi nhap vao can nang:");
	scanf("%d",&cannang);
	printf("\n");
	printf("Thong tin ca nhan:\n");
	puts(ten);
	printf("Nam sinh la:%d\n",namsinh);
	printf("Can nang la:%d\n",cannang);
	
}
void chucnang2(){
	int i,n,tong=0;
	printf("Moi nhap vao 1 so :");
	scanf("%d",&n);
	for(i=0;i<=n;i++){
		if(i%2!=0 && i%5==0){
			printf("%3d",i);
			tong+=i;		
		}
	}
	printf("\nGia tri tong la:%3d\n",tong);
}
void chucnang3(){
	int n,m,j,k;
	printf("Moi nhap vao so luonng vaccine:");
	scanf("%d",&n);
	int hieuqua[m];
	printf("Moi nhap vao so thoi gian gioi han:");
	scanf("%d",&k);
	int qua[k]; 
	for(m=0;m<k;m++){
	printf("Moi nhap vao thoi gian hieu qua cua vaccine [%d]:",m);
	scanf("%d",&hieuqua[m]);
    }
	int max=hieuqua[0];
	int min=hieuqua[0];
	for(m=0;m<k;m++){
		if(hieuqua[m]>max){
			max=hieuqua[m];
		}
	}
	for(m=0;m<k;m++){
		if(hieuqua[m]<min){
			min=hieuqua[m];
		}
	}
	int temp;
	for(m=0;m<k;m++){
		for(j=m+1;j<k;j++){
			if(hieuqua[m]<hieuqua[j]){
				temp=hieuqua[m];
				hieuqua[m]=hieuqua[j];
				hieuqua[j]=temp;
			}
		}
	}
	
	printf("____Thong tin vaccine\n");
	printf("So luong vaccine la:%d\n",n);
	printf("Thoi gian hieu qua cao nhat la:%d\n",max);
	printf("Thoi gian hieu qua thap nhat la:%d\n",min);
	for(m=0;m<k;m++){
		printf("Thoi gian hieu qua gian dan la:%d\n",hieuqua[m]);
}
}
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

