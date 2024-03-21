#include<stdio.h>
#include<math.h>
int main(){
	double a,b,c,x,x1,x2,delta;
	//INPUT:Nhap vao gia tri cua a,b,c
	//OUTPUT:Nghiem cua phuong trinh
	printf("Moi nhap vao gia tri cua a:");
	scanf("%lf",&a);
	printf("Moi nhap vao gia tri cua b:");
	scanf("%lf",&b);
	printf("Moi nhap vao gia tri cua c:");
	scanf("%lf",&c);
	if(a==0){
		//PT thanh bx+c=0
		//chia 2 TH
		    if(b==0){
		    	//TH1: c=0
		    	//TH2: c!=0
		    	if(c=0){
		    		printf("Phuong trinh co vo so nghiem");
		    	}else{
		    		printf("Phuong trinh vo nghiem");
				}
			}else{
				x=-c/b;
				printf("Phuong trinh co nghiem la:%lf",x);
			}
	}else{
		delta= b*b-4*a*c;
		if(delta<0){
			printf("Phuong trinh vo nghiem");
		}else if(delta==0){
		    printf("Phuong trinh co hai nghiem kep");
			x=-b/2*a;
			printf(" X la:%lf",x);	
		}else{
		    printf("Phuong trinh co hai nghiem phan biet");
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf(" X1 la:%lf",x1);
			printf(" X2 la:%lf",x2);
			}
	}
	return 0;
	}					
		
		

	
	
	

	    	
			
	
	
	
