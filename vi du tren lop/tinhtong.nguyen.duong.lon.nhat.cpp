#include <stdio.h>
int main(){
int n;
	printf("so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n],ary1[n],max,s;
	
	for (int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	for (int i=0; i<n; i++){
		ary1[i]=0;
	}
	int t=0;s=0;
	for (int i=0;i<n;i++){
		
		if( ary[i]>0){
			s=s+ary[i];
		}
		else{
			ary1[t]=s;
			s=0;
			t++;
			
		}
			
			
			
			
	}
	max=ary1[0];
	for(int i=1;i<t;i++){
		if (ary1[i]>max){
			max=ary1[i];
		}
	}
	printf("%d",max);
}
