#include <stdio.h>
 
void hoanvi(int a, int b)  
{
    int temp = a;
    a = b;
    b = temp;
}
 
int main()
{
    int a, b;
    printf("Nhap 2 so a, b:\n");
    scanf("%d%d", &a, &b);
 
    printf("Ban da nhap:\na = %d \nb = %d\n", a, b);
 
    hoanvi(&a, &b);
 
    printf("Sau khi goi ham hoanvi:\na = %d\nb = %d \n", a, b);
    return 0;
}
