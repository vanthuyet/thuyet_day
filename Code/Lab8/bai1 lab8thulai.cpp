#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct Sinhvien{
	char mssv[50];
	char hoten[50];
	char nganhhoc[50];
	float diemTb;
};
int main(){
	int i,n,j;
	struct Sinhvien sv[50];
	printf("Moi nhap vao so sinh vien muon them:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Moi nhap vao MSSV:");
		while(getchar() != '\n');
		gets(sv[i].mssv);
		printf("Moi nhap vao ho va ten:");
		gets(sv[i].hoten);
		printf("Moi nhap vao nganh hoc:");
		gets(sv[i].nganhhoc);
		printf("Moi nhap vao diem TB:");
		scanf("%.2f",&sv[i].diemTb);
	}
	struct Sinhvien temp;
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(sv[i].diemTb<sv[j].diemTb){
				temp=sv[i];
				sv[i]=sv[j];
				sv[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++){
		printf("MSSV la:%s\n",sv[i].mssv);
		printf("Ho va ten la:%s\n",sv[i].hoten);
		printf("Nganh hoc la:%s\n",sv[i].nganhhoc);
		printf("Diem TB la: %.2f\n",sv[i].diemTb);	
	}
	return 0 ;
}

