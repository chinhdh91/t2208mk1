#include <stdio.h>
int main(){
int n;
	printf("so phan tu cua mang:");
	scanf("%d",&n);
	int ary[n],ary1[n],max=0;
	
	for (int i=0;i<n;i++){
		printf("phan tu thu %d:",i);
		scanf("%d",&ary[i]);
	}
	for (int i=0; i<n; i++){
		ary1[i]=0;
	}
	int t=0;
	for (int i=0;i<n;i++){
		
		if( ary[i]>0){
			int count=1;
			for (int j=i+1;j<n;j++){
				if (ary[j]>0){
					count++;
				}
				else {
					ary1[t]=count;
					t++;
					
					break;
				}
			}
		}
	}
	for(int i=0;i<t;i++){
		if (ary1[i]>max){
			max=ary1[i];
		}
	}
	printf("%d",max);
}
