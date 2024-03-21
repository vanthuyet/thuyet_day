#include<stdio.h>
int main(){
	// Lenh re nhanh if
	double diemTrungBinh;
	int sotunhien;
	printf("Xin moi nhap vao mot so tu nhien :");
	scanf("%d",&sotunhien);
	//Neu so tu nhien % 2 ---> so chan
	//Neu so tu nhien %3 ----> so chia het cho 3
	if(sotunhien%2==0){
		printf("So %d la so chia het cho 2\n",sotunhien);
	}
	if(sotunhien%3==0){
	printf("so %d la so chia het cho 3",sotunhien);
	}
	return 0;
	}	

		
