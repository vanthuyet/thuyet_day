#include<stdio.h>
int main(){
	//Output :hien thi ra man hinh hoc luc cua sinh vien
	double diem;
	printf("Moi nhap vao diem trung binh cua ban:");
	scanf("%lf",&diem); 
	if(diem>=9){
		printf("Loai Xuat Sac ");
	}else if(diem>=8){
		printf("Loai Gioi");
	}else if(diem>=6.5){
	    printf("Loai Kha");
	}else if(diem>=5){
	    printf("Loai TB");
	}else if(diem>=3.5){
	    printf("Loai Kem");   
	}else if(diem<0){
		printf("Ban da nhap sai");
	}else{
		printf("Ban hay co gang hon");
	}
	return 0;
	}    
		
		
