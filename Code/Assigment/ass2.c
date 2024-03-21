#include<stdio.h>
void chucnang1();void chucnang2();void chucnang3();void chucnang4();void chucnang5();void chucnang6();
int main(){
	int a;
	do{
	printf("\n______menu____________\n");
	printf("Chuc nang 1:Kiem tra so\n");
	printf("Chuc nang 2:Tim UC,BC\n");
	printf("Chuc nang 3:Tinh tien cho quan Karaoke\n");
	printf("Chuc nang 4:Tinh tien dien\n");
	printf("Chuc nang 5:Doi tien\n");
	printf("Chuc nang 6: Tinh lai suat vay ngan hang\n");
	printf("Chuc nang 7:Thoat\n");
	printf("__Moi chon 1 chuc nang:\n");	scanf("%d",&a);
	switch(a){
		case 1: printf("Ban da chon chuc nang 1");
		chucnang1();
		break;
		case 2: printf("Ban da chon chuc nang 2");
		chucnang2();
		break;
		case 3: printf("Ban da chon chuc nang 3");
		chucnang3();
		break;
		case 4: printf("Ban da chon chuc nang 4");
		chucnang4();
		break;
		case 5: printf("Ban da chon chuc nang 5");
		chucnang5();
		break;
		case 6: printf("Ban da chon chuc nang 6");
		chucnang6();
		break;
		case 7: printf("Thoat");
	}
    }while(a!=7);
	return 0;
}
void chucnang1(){
	int i,n,dem1=0,dem2=0;
	printf("\nMoi nhap vao 1 so:");
	scanf("%d",&i);
	if(i==(int)i){
		printf("\n%d la so nguyen",i);
	}else{
		printf("\n%d khong phai la so nguyen",i);
	}
	for(n=2;n<i;n++){
		if(i%n==0){
		dem1++;
		break;
	}
	}if(dem1==0){
		printf("\n%d la so nguyen to",i);
	}else{
		printf("\n%d khong phai la so nguyen to",i);
	}
	for(n=0;n<i;n++){
		if(n*n==i){
			dem2++;
			break;
		}
	}if(dem2==0){
		printf("\n%d khong phai la so chinh phuong",i);
	}else{
		printf("\n%d la so chinh phuong",i);
	}
}
void chucnang2(){
	int x,y;
	printf("\nMoi nhap vao hai so x:");
	scanf("%d",&x);
	printf("Moi nhap vao hai so y:");
	scanf("%d",&y);
	if(x==0 && y==0){
		printf("\nKhong co ucln,bcnn");
	}else if(x>0 &&y>0){
		int bc=x*y;
		while(x!=y){
			if(x>y){
				x=x-y;
			}else{
				y=y-x;
			}
		}
		printf("UCLN la:%d\n",y);
		printf("BCNN la:%d\n",bc/y);
    }else if(x < 0 && y >0){
		int bc = x * y;
		x = -x;
		while(x != y) {
				if(x > y) {
					x = x - y;
				} else {
					y = y - x;
				}
			}
            printf("\nUCLN = %d\n", y);
			printf("BCNN = %d\n", -bc / y);
	}else if(x > 0 && y< 0){
		int bc = x * y;
		y = -y;
		while(x != y) {
				if(x > y) {
					x = x - y;
				} else {
					y = y - x;
				}
			}
            printf("\nUCLN = %d\n", y);
			printf("BCNN = %d\n", -bc / y);
		}
   
    else{
    	int bc = x * y;
		x = -x;
		y = -y;
		while(x != y) {
				if(x > y) {
					x = x - y;
				} else {
					y = y - x;
				}
			}
            printf("\nUCLN = %d\n", y);
			printf("BCNN = %d\n", bc / y);
		}
}
void chucnang3(){
	int giodau,giocuoi,tonggio;
	int t=150000;
	int tientra;
	int sau3,dacbiet;
	do{
	printf("\nTINH TIEN KARAOKE \n");
	printf("Luu y quan chi mo tu 12h-->23h\n");
	printf("Moi nhap gio bat dau:");
	scanf("%d",&giodau);
	printf("Moi nhap gio cuoi:");
	scanf("%d",&giocuoi);
	tonggio=giocuoi-giodau;
	printf("Gio cuoi %d - gio dau %d= %d",giocuoi,giodau,tonggio);
	printf("\nTien phai tra:%d",(tonggio*t));
	if(giodau>=14 && giodau<=17){
		printf("\nKhung gio dac biet!!\n");
	    if(tonggio>3){
		printf("Co khuyen mai!\n");
		sau3=(tonggio-3)*0.3*t;
		tientra=tonggio*t-sau3;
		printf("Gio khuyen mai:%d ---> tien khuyen mai:%d\n",(tonggio-3),sau3);
	}else{
	tientra=tonggio*t;	
		
	}
	dacbiet=tientra*0.1;//khuyen mai10%
	printf("Tien khuyen mai dac biet:%d\n",dacbiet);
	printf("Tien phai tra trc gio dac biet:%d\n",tientra);
	tientra=tientra-dacbiet;
	printf("Tien phai tra :%d\n",tientra);
   }else{
   if(tonggio>3){
		printf("Co khuyen mai!\n");
		sau3=(tonggio-3)*0.3*t;
		tientra=tonggio*t-sau3;
		printf("Gio khuyen mai:%d ---> tien khuyen mai:%d\n",(tonggio-3),sau3);
	}else{
	tientra=tonggio*t;
	printf("Tien phai tra la:%d\n",tientra);	
		
	}
   }
}while(giodau<12 || giocuoi>23);
}
void chucnang4(){
	float tiendien,sodien,bac1=1.678,bac2=1.734,bac3=2.014,bac4=2.536,bac5=2.834,bac6=2.937;
	do{
	printf("Moi nhap vao so dien:");
	scanf("%f",&sodien);
	if(sodien<0){
		printf("So dien khong co,nhap lai");
	}else{
		if(sodien<=50){
			printf("Tien dien cua ban la:%f VND\n",tiendien=sodien*bac1);
		}else if(sodien<=100){
			printf("Tien dien cua ban la:%f VND\n",tiendien=50*bac1+(sodien-50)*bac2);
		}else if(sodien<=200){
			printf("Tien dien cua ban la:%f VND\n",tiendien=50*bac1+50*bac2+(sodien-100-50)*bac3);     
		}else if(sodien<=300){
			printf("Tien dien cua ban la:%f VND\n",tiendien=50*bac1+50*bac2+100*bac3+(sodien-100-50-50)*bac4);
		}else if(sodien<=400){
			printf("Tien dien cua ban la:%f VND\n",tiendien=50*bac1+50*bac2+100*bac3+100*bac4+(sodien-50-50-100*2)*bac5);
		}else{
			printf("Tien dien cua ban la:%f VND\n",tiendien=50*bac1+50*bac2+100*bac3+100*bac4+100*bac5+(sodien-50-50-100*3)*bac6);
		}	
		}
	}while(sodien<0);
	}
void chucnang5(){
	int tiendoi,menhgia[]={500,200,100,50,20,10,5,2,1},n=0;
	int sototien,i;
	printf("\nMoi nhap so tien can doi:");
	scanf("%d",&tiendoi);
	while(tiendoi){
		for(i=0;i<9;i++){
			sototien=tiendoi/menhgia[i];
			if(sototien!=0){
				printf("\nCo %d to tien %d",sototien,menhgia[i]);
			}
			tiendoi=tiendoi-sototien*menhgia[i];
			
		}
	}
	
	
	
	
}
void chucnang6(){
	int i,thang=12;
	float tienvay,laisuat,goctra,tientra,trathang;
	printf("Moi nhap vao so tien muon vay:");
	scanf("%f",&tienvay);
	goctra=tienvay/thang;
	for(i=1;i<=12;i++){
		laisuat=tienvay*0.05;
		trathang=goctra+laisuat;
		tienvay-=trathang;
		printf("\nthang: %d\t lai suat:%.2f\tgoc tra %.2f\t tra thang:%.2f\t tienvay:%.2f",i,laisuat,goctra,trathang,tienvay);
		
	}
	
}
			
		

