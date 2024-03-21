#include<stdio.h>
int main(){
	//Xay dung chuong trinh cho 3 bai truoc
	int motso;
	printf("\n Hay chon chuong trinh duoi day:");
	printf("\n ................................"); 
	printf("\n Chon 1,2,3,4"); 
	printf("\n 1.Tinh hoc luc");
	printf("\n 2.Giai phuong trinh"); 
	printf("\n 3.Tinh tien dien");
	printf("\n 4.Thoat chuong trinh");
	printf("\n ........................."); 
	printf("\n Moi ban chon moi chuong trinh tren:");
	scanf("%d",&motso);
	switch(motso){
		case 1 :
			printf("Chao mung ban den voi bai tinh hoc luc");
			break;
		case 2 :
		    printf("Chao mung ban den voi bai giai phuong trinh ");
			break;
		case 3 :
		    printf("Chao mung den ban den voi chuong trinh thu tien dien :))");
		    break; 
		case 4 :
		    printf("thoat khoi chuonng trinh");
		    break; 
		default:
		    printf("Khong co cai do dau em, nhap lai di");
	}
	return 0;
	}					
	
