#include<stdio.h>
int main(){
	//Lenh re nhanh SWITCH-CASE
	//Xet vi du Viet Nam co bao nhieu dan toc anh em
	//Nhap vao cac dap an a,b,c,d
	//Neu nguoi dung nhap cac dap an khac a,b,c,d thi output:ban da chon dap an khac bo dap an
	printf("Viet Nam co bao nhieu dan toc anh em!\n");
	printf("a.54\nb.55\nc.56\nd.57\n");
	printf("Xin moi ban chon dap an!");
	char dapan;
	scanf("%s",&dapan);
	switch(dapan){
		case 'a':
			printf("Dung");
			break;
		case 'b':
			printf("Sai");
			break;
		case 'c':
			printf("Sai");
			break;	
		case 'd':
			printf("Sai");
			break;
		    default:
			printf("Nhap dung dap an vao di em");
	}
	return 0;
	}			
	
