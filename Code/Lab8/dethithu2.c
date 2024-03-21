#include<stdio.h>
void chucnang1();void chucnang2();void chucnang3();
int main(){
	int a;
	printf("----------------MENU--------------\n");
	printf("Chuc nang 1: Thong tin gia dinh\n");
	printf("Chuc nang 2: So le chia het cho 7\n");
	printf("Chuc nang 3: Thong tin sach giao khoa\n");
	printf("Chuc nang 4: Thoat\n");
	do{
	printf("\nMoi ban chon 1 chuc nang tren:");
	scanf("%d",&a);
	switch(a){
		case 1: printf("Ban da chon chuc nang 1\n");
		chucnang1();
		break;
		case 2: printf("Ban da chon chuc nang 2\n");
		chucnang2();
		break;
		case 3: printf("Ban da chon chuc nang 3\n ");
		chucnang3();
		break;
		case 4: printf("Ban da Thoat");
		return 0;
		default:
			printf("Moi nhap lai\n");
	}
    }while(a!=4);
    return 0;
}
void chucnang1(){
	char tenGd[50],tot[20];
	int tuoi;
	printf("Nhap ten tv Gd:");
	gets(tot);
	gets(tenGd);
	printf("Moi nhap tuoi cua tv ban vua nhap:");
	scanf("%d",&tuoi);
	
	printf("\n---------------Thong tin gia dinh--------------\n");
	printf("Ten Tv la:\n");
	puts(tenGd);
	printf("Tuoi Tv gia dinh la:%d\n",tuoi);
}
void chucnang2 (){
	int i,n;
	printf("Moi nhap 1 so :");
	scanf("%d",&n);
	for(i=1;i<n;i++){
		if(i%2!=0 && i%7==0){
			printf("%5d",i);
		}
	}
	
}
void chucnang3(){
	int n,i;
	printf("Moi nhap so luong sach:");
	scanf("%d",&n);
	int soluong[n];
	float gia[50];
	for(i=0;i<n;i++){
		printf("Moi nhap vao gia quyen sach thu %d :",i+1);
		scanf("%f",&gia[i]);
	}
	printf("\n-----Xuat thong tin sach lop-------\n");
	printf("So luong sach la:%d\n",n);
	for(i=0;i<n;i++){
		printf("Gia quyen sach thu %d la:%.3f\n",i+1,gia[i]);
	}
	int dem=0;
	float tong=0,tb=0;
	for(i=0;i<n;i++){
		if(gia[i]<50){
			printf("%.3f\n",gia[i]);
			tong+=gia[i];
			dem++;
		}
	}
	if(dem==0){
		tb=0;
	}else{
		tb=tong/dem;
	}
	printf("So luong sach duoi 50k:%d\n",dem);
	printf("Trung binh gia tien cac sach duoi 50k:%.3f quyen\n",tb);
	float max=gia[0];
	for(i=0;i<n;i++){
		if(gia[i]>max){
		max=gia[i];			
		}
	}
	printf("Cac vi tri sach co gia tien cao nhat  la:\n");
	for(i=0;i<n;i++){
		if(max==gia[i]){
			printf("%5d",i+1);
		}
	}
	
}
