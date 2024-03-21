#include<stdio.h>
//Viet Nam co bao nhieu dan toc anh em  
int main(){
	printf("Viet Nam co bao nhieu dan toc anh em:");
	printf(" \na.52 \nb.53 \nc.54 \nd.55");
	printf("\n Moi chon dap an trong (a,b,c,d) \n");
	char Dapan;
	scanf("\n %s",&Dapan);
	switch(Dapan){
		case 'a': printf("Ban da chon dap an sai");
		break;
		case 'b': printf("Ban da chon dap an sai");
		break;
		case 'c': printf("Ban da chon dap an dung");
		break;
		case 'd': printf("Ban da chon dap an sai");
		break;
		default:
		printf("\n Nhap lai di em");
		break; 
		}
		return 0; 
} 
