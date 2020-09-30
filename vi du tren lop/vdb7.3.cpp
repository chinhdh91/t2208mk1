#include <stdio.h>
int main(){
int n,t=0,s,j=0;
	printf("so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n];
	
	for (int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&ary[i]);
		if (ary[i]%2==1 && i%2==0){
			t=t+ary[i];
			j++;
									}
						}
	
	printf("tbc cac vi tri chan= %d",t/j);
}
