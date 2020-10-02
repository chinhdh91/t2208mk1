#include <stdio.h>
int main(){

float a,a1,b,tienlai,tienlai1;
int c;

printf("Enter Capital Sum:\n");
scanf("%f",&a);
printf("Enter Rate Of Interest:\n");
scanf("%f",&b);
printf("Enter No of Year:\n");
scanf("%d",&c);
a1=a;
for(int i=0;i<c;i++){
	tienlai=(a*b)/100;
	a=a+tienlai;
	printf("Sum After Year no%d %d: \n",i+1,a);
}

tienlai=0;
for(int i=0;i<c;i++){
	tienlai=(a1*b)/100;
	a1=1+tienlai;
	printf("year    interest         sum \n");
	printf("%d       %11f   %15f \n", i+1,tienlai,a1);
	
}


}

