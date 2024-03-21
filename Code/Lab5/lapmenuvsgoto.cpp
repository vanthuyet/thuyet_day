#include<stdio.h>
int main(){
	int chonSo;
	NHAPLAI:
	printf("\n++---------------------------------++");
	printf("\n|Chuc nang 1: Tinh trung binh tong  |");
	printf("\n|Chuc nang 2 : Tim so nguyen to     |");
	printf("\n|Chuc nang 3 : Tim so chin phuong   |");
	printf("\n|Chuc nang 4 : Thoat                |");
	printf("\n++---------------------------------++");
	printf("\nMoi ban chon 1 so tu 1--->4:");
	scanf("%d",&chonSo);
	
	switch(chonSo){
		case 1 : printf("Ban da chon chuong trinh tinh trung binh tong");
		goto NHAPLAI;
		case 2 : printf("Ban da chon chuong trinh tim so nguyen to");
		goto NHAPLAI;
		case 3 : printf("Ban da chon chuong trinh tim so chinh phuong");
		goto NHAPLAI;
		case 4 : printf("Ban da chon thoat chuong trinh");
		break;
		default:
			printf("Ban da chon sai so");
			goto NHAPLAI;
			
	}
	return 0;
}
