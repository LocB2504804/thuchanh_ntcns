#include <stdio.h>
#include <math.h>

 main()
{
float a, b;
float dientich,chuvi;
printf("Vui long nhap lan luot chieu dai va chieu rong cua hinh chu nhat:")  ;
scanf("%f%f",&a,&b);
dientich=a*b;
chuvi=(a+b)*2;
printf("vay dien tich cua hinh chu nhat la:");
printf("%.2f\n",dientich);
printf("vay chuvi cua hinh chu nhat la:");
printf("%.2f",chuvi);
}