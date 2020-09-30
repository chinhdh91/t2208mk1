#include<stdio.h>
int main(){
	int n,gan,s;
	printf("nhap so phan tu:");
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		printf("arr[%d]:",i);
		scanf("%d",&arr[i]);
	}
	for (int i=0;i<n-1;i++){
		for (int j=i+1;j<n;j++)
		if(arr[i]>arr[j]){
			gan=arr[i];
			arr[i]=arr[j];
			arr[j]=gan;
		}
	}
	printf("nhap x=");
	scanf("%d",&s);
	if(s<arr[0]){
		printf("ko co so trong mang");
	}
	if(arr[n-1]<s){
		printf("so can tim la %d",arr[n-1]) 
	}
		else{
		
	
	for (int i=0;i<n-1;i++){
		if(arr[i]<s && arr[i+1]>=s){
			printf("so an tim la:%d ",arr[i]);
		}
		
	}
}
}
