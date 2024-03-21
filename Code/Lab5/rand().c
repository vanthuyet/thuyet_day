#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>
int main(){
	//Sinh ra mot so ngau nhien tu 1--->15
	//Nguoi dung nhap vao 1 so tu 1--->15
	//Neu so nguoi dung nhap vao = so cua he he thong sinh ra ngau nhien
	//Thi hien thong bao : Ban da trung de,nguoc lai: Chuc ban may man lan sau
	// Su dung ham rand() 0---> Rand_Max
	time_t seconds;
	seconds = time(NULL);
	
	srand((unsigned )seconds);
	int soChon;
	printf("Moi ban nhap 1 so tu 1--->15:");
	scanf("%d",&soChon);
	int soNgaunhien= rand()%15+1;
	printf("So ban chon la:%d\nQuay ra so:%d",soChon,soNgaunhien);
	if(soChon== soNgaunhien){
		printf("\nBAN DA TRUNG DE");
	}else{
		printf("\nChuc ban may man lan sau");
	}
	return 0;
	 
}
