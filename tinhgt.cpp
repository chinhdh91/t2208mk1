#include<stdio.h>
int giaithua(int n){
	int s=1;
	for(int i=1;i<n;i++){
		s=s*i;
	}
	return s;
}
void tbc(int a, int b,int c){
    float s=(float)(a+b+c)/3;
    printf("tbc = %f",s);
	return;
}

int timsothun(int n){
	int x0,x1=1,x2=1;
	if(n<0){
		printf("ko co trong day fibo");
		if(n<= 2){
			printf("vi tri %d= %d",n,1);
		}
	}
	else{
	
	for (int i=2;i<n;i++){
		x0=x1+x2;
		x2=x1;
		x1=x0;
	}
}
return x0;
}

void ktsonguyento(int s){
	for ( int i=1;i<s/2;i++){
		if(s%i==0){
			printf("khong phai so nguyen to");
		}
		else{
		printf("la so nguyen to");
		}
		break;
	}
}

int nghichdao(float n){
	n=1/n;	
	printf("so nghich dao: %f",n);
}

int main(){
	
	int x=20;
	int gt_x= giaithua(x);
	printf("giai thua 20= %d", gt_x);
	
	int a,b,c;
	printf("\n");
	printf("nhap 3 so:");
	scanf("%d %d %d",&a,&b,&c);
	tbc(a,b,c);
	printf("\n");
	printf("\n");
	
	int n;
	printf("nhap vi tri can tim: ");
	scanf("%d",&n);
	printf("vi tri thu %d trong day la: %d",n,timsothun(n));
	printf("\n");
	printf("\n");
	
	int s;
	printf("nhap so can kiem tra: ");
	scanf("%d",&s);
	ktsonguyento(s);
	printf("\n");printf("\n");
	
	float t;
	printf("nhap so can tim nghich dao: ");
	scanf("%f",&t);
	nghichdao(t);
	
}
