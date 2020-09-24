#include <stdio.h>
int main(){
	int arr[2][3],amp,arr1[3][2];
	for (int i=0;i<2;i++){
		for (int j=0;j<3;j++){
			
			scanf("%d",&arr[i][j]);
		}
printf("\n");
	}
	
	for (int i=0;i<2;i++){
		for(int j=0;j<3;j++){		
			arr1[j][i]=arr[i][j];
		}
	}
		printf("ma tran chuyen vi:\n");

	for (int i=0;i<3;i++){
		for (int j=0;j<2;j++){
			printf("%d",arr1[i][j]);
		}
		printf("\n");
	}
			
}
