#include<stdio.h>
#include<string.h>
int main(){
	//nhap xuat chuoi
	//Cac ham thao tac chuoi
	//strlen dem so ky tu
	//strcpy sao chep ky tu
	//strcat noi cac ky tu
	//strcmp de so sanh cac chuoi
	//strrev dao nguoc chuoi
	//strlwr  bien chuoi thanh chu thuong
	//strupr viet hoa chuoi
	//strstr tim chuoi con trong 1 chuoi
	/*char ten[1];
	char them[50];
	printf("Moi nhap vao ten cua ban:");
	gets(ten);
	printf("So ky tu:%d\n",strlen(ten));
	puts(ten);
	strcpy(them,ten);
	printf("%s",them);
	char noi[50];
	printf("\nMoi nhap vao ve sau:");
	gets(noi);
	strcat(them,noi);
	printf("\n%s",them);*/
	char user[10];
	char pass[10];
	printf("Moi nhap vao user:");
	gets(user);
	printf("Moi nhap vao pass:");
	gets(pass);
	printf("User la:%s \n Pass la:%s\n",user,pass);
	char usersys[]="ADMIN";
	char passsys[]="fpt";
	if(strcmp(strupr(user),usersys)==0 && strcmp(pass,passsys==0)){
		printf("Ban da nhap dung mat khau");
	}else{
		printf("Ban da nhap sai mat khau");
	}
	
	
	
	
	return 0;
}
