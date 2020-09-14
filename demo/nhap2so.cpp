#include <stdio.h>
#include <math.h>
int main(){
	int a,b;
	printf("nhap a=");
	scanf("%d",&a);
	printf("nhap b=");
	scanf("%d",&b);
	
	if (a>=b){
	float	h=a/b;
		printf("a chia b = %d",h);
			}
	else{
		printf("a x b = %d", a*b);
	}
}
