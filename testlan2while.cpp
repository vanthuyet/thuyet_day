#include<stdio.h>
int main(){
	//Demo vong lap while
	//Tinh tong cac so tu 1--->10
	int so =1;
	int tong =0;
	while(so<=10){
		tong+=so;
		so++;
	}
	printf("Tong co gia tri la:%d",tong);
	return 0;
	}	
