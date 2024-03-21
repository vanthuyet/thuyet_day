#include<stdio.h>
int main(){
	int so;
	printf("Chao mung ban  den voi cac CHUONG TRINH LAB");
	
	printf("\n....................................................."); 
	printf("\n.Moi chon trong cac chuong trinh duoi day           ."); 
	printf("\n.1.Kiem tra so nguyen                               .");
	printf("\n.*                                                  ."); 
	printf("\n.2.Tim uoc so chung va boi so chung cua 2 so        .");
	printf("\n.*                                                  ."); 
	printf("\n.3.Chuong trinh tinh tien cho quan Karaoke          ."); 
	printf("\n.*                                                  .");
	printf("\n.4.Tinh tien dien                                   .");
	printf("\n.*                                                  ."); 
	printf("\n.5.Chuc nang doi tien                               .");
	printf("\n.*                                                  ."); 
	printf("\n.6.Chuc nang tinh lai xuat vay ngan hang tra gop    .");
	printf("\n.*                                                  ."); 
	printf("\n.7.Chuong trinh vay tien mua xe                     .");
	printf("\n.*                                                  .");
	printf("\n.8.Sap xem thong tin sinh vien                      .");
	printf("\n.*                                                  .");
	printf("\n.9.Game FPOLY-LOTT (2/15)                           .");
	printf("\n.*                                                  .");
	printf("\n.10.Thoat khoi chuong trinh                         .");
	printf("\n.*                                                  .");
	printf("\n.....................................................");
	printf("\nBan chon chuong trinh nao:");
	scanf("%d",&so);
	switch(so){
		case 1 : printf("Chao mung ban den voi chuong trinh kiem tra so nguyen"); 
		break; 
		case 2 : printf("Chao mung ban den voi chuong trinh tim uoc so chung va boi so chung cua 2 so"); 
		break; 
		case 3 : printf("Chao mung ban den voi chuong trinh tinh tien cho quan Karaoke"); 
		break;
		case 4 : printf("Chao mung ban den voi chuong trinh tinh tien dien "); 
		break;
		case 5 : printf("Chao mung ban den voi chuong trinh doi tien dien"); 
		break;
		case 6 : printf("Chao mung ban den voi chuong trinh tinh lai xuat vay ngan hang tra gop");  
		break;
		case 7 : printf("Chao mung ban den voi chuong trinh vay tien mua xe may");  
		break;
		case 8 : printf("Chao mung ban den voi chuong trinh sap sep thong tin sinh vien");  
		break;
		case 9 : printf("Chao mung ban den voi chuong trinh Game FPOLY-LOTT (2/15) ");  
		break;
		case 10: printf("Dang thoat khoi chuong trinh");  
		break;
		default:
		printf("Moi ban nhap lai 1 so dung"); 
	}
	return 0; 
} 
