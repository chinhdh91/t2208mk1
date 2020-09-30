#include <stdio.h>
int main(){
int n,gan;
	printf("so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n];
	
	for (int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	
	for( int i=0;i<n-1;i++){
		for( int j=i+1;j<n;j++){
			if(ary[i]>ary[j]){
			
			gan=ary[i];
			ary[i]=ary[j];
			ary[j]=gan; 
			}
		}
	}
	for(int i=0;i<n;i++){
		if (ary[i]>0){
			printf("so duong nho nhat %d",ary[i]);
			break;
		}

	}
	
}
