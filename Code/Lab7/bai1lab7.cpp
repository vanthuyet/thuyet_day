#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	printf("Moi nhap vao chuoi:");
	gets(s);
	int i;
	int n; //bien dem nguyen am
	int p; //bien dem phu am
	while(s[i]!='\0'){
		if(s[i]=='a'||s[i]=='o'||s[i]=='e'||s[i]=='i'||s[i]=='u'){
		n++;
	}else{
		p++;
	}i++;
}
	printf("Co so nguyen am la:%d\n",n);
	printf("Co so phu am la:%d",p);
	return 0;
}
