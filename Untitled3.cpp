#include<stdio.h>
#include<stdlib.h>

void nhapmang(int arr[],int n){
	for (int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
}

void sapxep(int n,int arr[]){

	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if (arr[j]>arr[j+1]){
			int	amp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=amp;
			}
		}
	}
		for(int i=0;i<n;i++){
			printf("%d",arr[i]);
		}
	}


int main(){
	int *p,n;
	printf("nhap so phan tu: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));//tuong duong int p[5]
	nhapmang(p,n);
	sapxep(n,p);
	p=(int *)malloc(2*n*sizeof(int));	
	
	printf("nhap tiep:\n");
	
	for(int i=n;i<2*n;i++){
			scanf("%d",&p[i]);
		}
	
	sapxep(2*n,p);
	
}
