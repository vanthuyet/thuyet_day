#include<stdio.h>
int main(){
	int chon;
	do{
	printf("Menu");
    printf("Chuong trinh 1:Tinh j do");
    printf("Chuong trinh 2:Tinh cai j do");
    printf("Chuong trinh 3:Tinh cai j");
    printf("Chuong trinh 4:sao");
    printf("Chuong trinh 5:THOAT");
    switch(chon){
    	case 1: bai1();
    	break;
    	case 2: bai2();
    	break;
    	case 3: bai3();
    	break;
    	case 4: bai4();
    	break;
    	case 5: bai5();
    	break;
	}
    }while(chon!=5)
	
}
