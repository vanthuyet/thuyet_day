#include<stdio.h>
//Tinh lai suat ngan hang 
int main(){
	float sotien,tienlai,ls=8,ls2=7,ls3=6,ls4=5;
	do{
	printf("Moi ban nhap vao so tien:");
	scanf("%f",&sotien);
    }while(sotien<0); 
	if(sotien>=1000){
		printf("Tien lai cua ban la:%.2f tr",tienlai=sotien/100*ls);
	}else if(sotien>=500){
		printf("Tien lai cua ban la:%.2f tr",tienlai=sotien/100*ls2); 
	}else if(sotien>=100){
		printf("Tien lai cua ban la:%.2f tr",tienlai=sotien/100*ls3); 
	}else{
		printf("Tien lai cua ban la:%.2f tr",tienlai=sotien/100*ls4);
	}
     
	 


	return 0;   
	 
}
 
