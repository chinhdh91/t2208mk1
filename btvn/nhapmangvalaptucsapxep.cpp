#include<stdio.h>
int main(){
	int n,gan,s;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	int arr[n];
	
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
		for(int j=0;j<i;j++){
			if(arr[j]>arr[i]){
				gan=arr[j];
				arr[j]=arr[i];
				arr[i]=gan;
			}
		}
		
	}
	printf("\n");
	printf("mang tu be den lon: ");
	for(int i=1;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
	
