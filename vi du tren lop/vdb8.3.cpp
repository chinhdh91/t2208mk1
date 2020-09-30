#include <stdio.h>
int main(){
	
	int n,i;
	printf("nhap so phan tu cua mang:");
	scanf("%d",&n);
	int arr[n];
	printf("arr[0]=");
	scanf("%d",&arr[0]);
	
	for(int i=1;i<n;i++){
		printf("arr[%d]=",i);
			scanf("%d",&arr[i]);
		
		for(int j=i-1;j>=0;j--){
			if (arr[j]==arr[i]){
			printf("trung, moi nhap lai\n");
			i--;
			break;
			}
		}
	}
}
