#include <stdio.h>
	int main() {
int a,b,c,d,e,f,g,h,t;
printf("nhap 3 canh cua tam giac   ");
printf            ("a=");
scanf("%d", &a );
printf(" b=");
scanf("%d", &b );

printf("c=");
scanf("%d", &c );

g=a+b-c;
 h=a+c-b; 
t=b+c-a;

if (g<=0){

printf("a b c khong phai 3 canh cua tam giac");
}
else{
	if(h<=0) {
		printf(" a b c ko phai 3 canh cua tam giac");
		}
		else{
			if(t<=0){
				printf(" a b c ko phai 3 canh cua tam giac");
		}
		else{
		
		printf("a b c la 3 canh cua 1 tam giac");
		}
		}
		
}

}
