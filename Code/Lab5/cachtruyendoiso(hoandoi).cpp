#include<stdio.h>
void hoandoi2(int *x,int *y);
void  hoandoi(int x,int y){
	int temp;
	temp=x;
	x=y;
	y=temp;
	printf("%d\n",x);
	printf("%d\n",y);
}
int main(){
	int a=300;
	int b=700;
	printf("Truoc khi hoan doi:%d\n",a);
	printf("Truoc khi hoan doi:%d\n",b);
	
	hoandoi2(&a,&b);
	printf("Sau khi hoand doi :%d\n",a);
	printf("Sau khi hoand doi :%d\n",b);
	return 0;
	
}
void hoandoi2(int *x,int *y){
	int temp;
	*x=temp;
	*x=*y;
	*y=temp;
	
}
