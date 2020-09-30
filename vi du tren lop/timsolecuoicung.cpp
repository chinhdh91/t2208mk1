#include <stdio.h>
int main(){
int n;
	printf("so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n];
	
	for (int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	for(int i=n-1;i>0;i--){
		if(ary[i]%0==1){
			
					printf("so le cuoi cung %d",ary[i]);
					break;

		}
	}
	
}
