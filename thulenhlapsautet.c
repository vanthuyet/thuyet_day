#include<stdio.h>
int main(){
	int i=1,tong=0; 
	float tbc;
	int Dem; 
do{
	if(i%3 ==0){
	printf("%5d",i);
	tong+=i; 
	Dem++; 
	 
	} 
	
	i++; 
}while(i<1000);
 tbc=tong/Dem; 
printf("\n gia tri cua tong la:%d",tong); 
printf("\n Dem:%d",Dem); 
printf("\n gia tri tcb la:%f",tbc); 
	 
	return 0; 
}
	

