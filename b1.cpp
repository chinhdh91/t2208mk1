#include <stdio.h>
int main(){
	
	int f0=0,f1=1,f[15],n;
	f[0]=0;
	f[1]=1;
	f[2]=f[0]+f[1];
	for(int i=2;i<15;i++){
		n= f0+f1;
		f0=f1;
		f1=n;
		f[i]=n;
	}
	
	for (int i=1;i<15;i++){	
		if (f[i]<100){
		printf("%5d",f[i]);
		}
	}
	
}
