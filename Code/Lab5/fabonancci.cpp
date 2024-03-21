#include<stdio.h>
//IN RA DAY SO FINBONACCI
//KIEM TRA TUOI NHAP VAO TU BAN PHIM
//IN BANG CUU CHUONG TU 1---->10
int main(){
	int f0=1,f1=1,last,n;
	printf("Moi nhap vao so n:");
	scanf("%d",&n);
	printf("%d\n",f0);
	while(f1<n){
	    printf("%d\n",f1);
		last =f0+f1;
		f0=f1;
		f1=last;
	}
	return 0;
}

