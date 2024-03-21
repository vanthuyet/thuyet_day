#include<stdio.h>
#include<string.h>
int main(){
	 /*struct daudat{
		char hoten[20];
		struct date{
		int ngay;
		int thang;
		int nam;}ngaysinh;
	};
	struct daudat hocsinh1;
	strcpy(hocsinh1.hoten,"Nguyen Van Thuat");
	hocsinh1.ngaysinh.ngay=5;
	hocsinh1.ngaysinh.thang=1;
	hocsinh1.ngaysinh.nam=2011;
	
	printf("Thong tin :\n");
	printf("Ho va ten:%s\n",hocsinh1.hoten);
	printf("Ngay thang nam sinh %d/%d/%d",hocsinh1.ngaysinh.ngay,hocsinh1.ngaysinh.thang,hocsinh1.ngaysinh.nam);*/
	//---------------------
	//Tao kieu du lieu sinh vien
	//gom co: mssv(int),ten(char[]);ngay/thang/nam(int)
	int i;
	struct sinhvien{
		int msvv;
		char ten[20];
		struct date{
			float ngay;
			int thang;
			int nam;
		}ngaysinh;
	};
	struct sinhvien sv1[5];
	for(i=0;i<5;i++){
		printf("Moi nhap vao ma sinh vien:");
		scanf("%d",&sv1[i].msvv);
		printf("Moi nhap vao ten sinh vien:");
		scanf("%s",&sv1[i].ten);
		printf("Moi nhap vao ngay thang nam sinh:\n");
		scanf("%0.1f",&sv1[i].ngaysinh.ngay);	
	}
	for(i=0;i<5;i++){
		printf("Ma sinh vien la :%d",sv1[i].msvv);
		puts(sv1[i].ten);
		printf("Ngay thang nam sinh la:%d/%d/%d",sv1[i].ngaysinh.ngay,sv1[i].ngaysinh.thang,sv1[i].ngaysinh.nam);
	}
	
	return 0;
	






	
}
