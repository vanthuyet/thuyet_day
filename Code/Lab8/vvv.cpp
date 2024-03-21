#include<stdio.h>
#include<string.h>
void chucnang1();void chucnang2();void chucnang3();
int main(){
	int a;
    do{
	printf("\n--------Menu--------------\n");
	printf("Chuc nang 1:Nhap thong tin sinh vien\n");
	printf("Chuc nang 2:xep hang nhan vien\n");
	printf("Chuc nang 3:Diem sinh vien\n");
	printf("Chuc nang 4:Thoat chuong trinh\n");
	printf("---Moi chon 1 chuong trinh:");
	scanf("%d",&a);
	switch(a){
		case 1:printf("Ban da chon chuc nang 1\n");
		chucnang1();
		break;
		case 2:printf("Ban da chon chuc nang 2\n");
		chucnang2();
		break;
		case 3:printf("Ban da chon chuc nang 3\n");
		chucnang3();
		break;
		case  0:printf("Thoat\n");
		return 0;
		default:
			printf("Moi nhap lai!!");
		
	}
    }while(a!=0);
}
void chucnang1(){
	char hoten[30];
	char manv[30];
	char quequan[30];
	int tuoi;
	printf("\nMoi nhap vao ho ten:");
	gets(hoten);
	printf("Nhap ma nhan vien:");
	gets(manv);
	printf("Nhap quen quan:");
	gets(quequan);
	printf("Nhap tuoi:");
	scanf("%d",&tuoi);
	printf("----------Thong tin nhan vien__________\n");
	printf("HO TEN:%s\n",hoten);
	printf("MA nhan vien:%s\n",manv);
	printf("Que quan:%s\n",quequan);
	printf("Tuoi:%d\n",tuoi);
}
void chucnang2(){
	int thang;
	do{
	printf("Moi nhap so thang lam viec:");
	scanf("%d",&thang);
	if(thang>=36){
		printf("Ban lanh dao");
	}else if(thang>=18){
		printf("Giam doc");
	}else if(thang>=12){
		printf("Truong phong");
	}else if(thang>=6){
		printf("Teamlead");
	}else if(thang>0){
		printf("Nhan vien");
	}else{
		printf("Moi nhap lai!!");
	}
    }while(thang<0);
}
void chucnang3(){
	int i,j,n;
	printf("Moi nhap so luong sinh vien:");
	scanf("%d",&n);
	float diem[50];
	for( i=0;i<n;i++){
		printf("Moi nhap vao diem cua sinh vien thu %d:",i+1);
		scanf("%f",&diem[i]);	
	}
	float max=diem[0];
	float min=diem[0];
	for( i=0;i<n;i++){
		if(diem[i]>max){
		max=diem[i];
		}
	}
	for( i=0;i<n;i++){
		if(diem[i]<min){
			min=diem[i];
		}
	}
	int temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(diem[i]<diem[j]){
				temp=diem[i];
				diem[i]=diem[j];
				diem[j]=temp;
			}
		}
	}
	printf("\n-----Xuat thong tin sinh vien----\n");
	printf("So luong sinh vien la:%d\n",n);
	printf("Sinh vien diem cao nhat:%.2f\n",max);
	printf("sinh vien diem thap nhat:%.2f\n",min);
	printf("Thu tu giam dan:%.2f\n",diem[i]);
	
	
	/*int tim,d=0;
	printf("Moi nhap vao diem muon ktra:");
	scanf("%d",&tim);
	for(i=0;i<n;i++){
	if(tim=diem[i]){
		d++;
	}	
   }if(d==0){
   	printf("Co sinh vien co diem nay");
   }else{
   	printf("Khong co sinh vien co diem nay");
   }*/
}
