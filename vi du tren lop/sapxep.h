#include <stdio.h>
void sapxepmang(int arr[],int n){
	for (int i=0;i<n-1;i++){
		for(int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
				int atm=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=atm;
			}
		}
	}
}

//bool timkiem(int arr[], int n, int x){
//	for (for int i=0;i<n;i++){
//		if (x==arr[i]){
//			return true;
//			break;
//		}
//		return false;
//	}
	
//}

void nhapmang(int arr[], int n){
	for(int i=0;i<n;i++){
		printf("nhap phan tu %d: ",i);
		scanf("%d",&arr[i]);
	}
}
