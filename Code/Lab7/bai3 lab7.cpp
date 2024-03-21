#include<stdio.h>
#include<string.h>
int main(){
	char s[5][20];//5 chuoi moi chuoi toi da 20 ky tu
	int i,j;
	for(i=0;i<5;i++){
		printf("Moi nhap chuoi:");
		scanf("%s",&s[i]);
	}
	char trung[50];
	for(i=1;i<5;i++){
		for(j=1;j<5;j++){
			if(strcmp(s[j-1],s[i])>0){
				strcpy(trung,s[j-1]);
				strcpy(s[j-1],s[i]);
				strcpy(s[i],trung);
			}
		}
	}
	for(i=0;i<5;i++){
	printf("Chuoi sau khi sap xep:%s\n",s[i]);
    }

	return 0;
		
			
		
}
	

