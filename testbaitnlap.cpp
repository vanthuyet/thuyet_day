#include<stdio.h>
int main(){
	int n=10;
	while(n>0){
		if(n%3==0){
			printf("gia tri la:%d\n",n);
			n-=3; 
		} 
		n--; 
	} 
	return 0; 
} 
