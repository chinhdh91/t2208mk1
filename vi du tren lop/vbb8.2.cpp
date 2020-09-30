#include<stdio.h>
int main(){
	int arr[5]={23,9,10,4,25};
	int j,tmp;
	for(int i=1;i<5;i++){
		j=i-1;
		int tmp=arr[i];
		while(j>=0&&tmp<arr[j]){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=tmp;
	}
	printf("mang sau khi sap xep: ");
	for(int i=0;i<5;i++){
		printf("%d  ",arr[i]);
	}
}
