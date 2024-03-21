#include<stdio.h>
int main(){
	double tieuthu;
	printf("Moi nhap vao so dien tieu thu:");
	scanf("%lf",&tieuthu);
	if(tieuthu>401){
		printf("So tien phai dong la 2.927");
	}else if(tieuthu>301){
	    printf("So tien phai dong la:2.834");
	}else if(tieuthu>201){
	    printf("So tien phai dong la:2.536");
	}else if(tieuthu>101){
	    printf("So tien phai dong la:2.014");
	}else if(tieuthu>51){
	    printf("So tien can phai dong la:1.734");
	}else if(tieuthu>0){
	    printf("So tien phai dong la:1.678");
	}else{
		printf("Khong phai dong tien dien");
	}
	return 0;
	}				
	
