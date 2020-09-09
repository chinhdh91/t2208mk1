#include <math.h>
#include<stdio.h>

	int main() {
int a,b,c,e,t;
printf            ("nhap a=");
scanf("%d", &a );
printf("nhap b=");
scanf("%d", &b );

printf("nhap c=");
scanf("%d", &c );
if (a+b+c==0){
	t=-b/2/a;
	
	printf("phuong trinh co nghiem kep %d",t);
	}
else{



	e=b*b-4*a*c;


float g,f,x;

if  (e >=0){
	x= sqrt(e);
	g=(-b+x)/2/a;
	f=(-b-x)/2/a;
	printf("phuong trinh co 2 nghiem x1,x2 la ");
	printf("x1= %d   ",g);
	printf("x2= %d",f);
}else{
	printf("phuong trinh vo nghiem");

}




}
}


