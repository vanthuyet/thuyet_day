#include<stdio.h>
int main(){
	char dau;
	printf("Moi ban nhap vao:\n");
	printf("Dau +:Phep cong\n");
	printf("Dau -:Phep tru\n");
	printf("Dau *:Phep nhan\n");
	printf("Dau /:Phep chia\n");
	printf("Moi nhap vao 1 ky tu:");
	scanf("%c",&dau);
	switch(dau){
		case '+': printf(" Ban da chon phep cong");
		break;
		case '-': printf(" Ban da chon phep tru");
		break;
		case '*': printf(" Ban da chon phep nhan");
		break;
		case '/': printf(" Ban da chon phep chia");
		break;
		default:
			printf("Moi nhap lai");
	}
	return 0;
}
