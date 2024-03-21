#include<stdio.h>
int main(){
	float tiendien,sodien,bac1=1.678,bac2=1.734,bac3=2.014,bac4=2.536,bac5=2.834,bac6=2.937;
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
		     
		
	return 0;
	}

