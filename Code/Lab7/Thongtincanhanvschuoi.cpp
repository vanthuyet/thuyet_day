#include<stdio.h>
int main(){
	char ten[50];
	int tuoi;
	char quequan[50];
	char mssv[30];
	printf("Moi nhap ho ten:");
	gets(ten);
	printf("Moi nhap tuoi:");
	scanf("%d",&tuoi);
	printf("Moi nhap que quan:");
	while(getchar() != '\n');
	gets(quequan);
	printf("Moi nhap mssv:");
	gets(mssv);
	printf("\n_________Thong tin vua nhap________\n");
	printf("Ho va Ten:");
	puts(ten);
	printf("Tuoi:%d\n",tuoi);
	printf("Que quan:");
	puts(quequan);
	printf("MSSV:");
	puts(mssv);
	return 0;
}
