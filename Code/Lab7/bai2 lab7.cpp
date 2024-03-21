#include<stdio.h>
#include<string.h>
int main(){
char user[30];
char pass[30];
printf("Moi nhap username:");
gets(user);
printf("Moi nhap password:");
gets(pass);
char usersys[]="ADMIN";
char passsys[]="fpt";
if(strcmp(strupr(user),usersys)==0 && strcmp(pass,passsys)==0){
	printf("Nhap mat khau thanh cong!!"); 
	}else{
		printf("Sai mat khau");
	}
	return 0;
}
