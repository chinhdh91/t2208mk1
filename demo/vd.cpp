#include <stdio.h>
typedef struct sinhvien{
	char tensv[100];
	int tuoisv;
	int diemthi;
} sv;

int main(){
	sv x;
	printf("nhap ten sv: ");
	scanf("%s",x.tensv);
	printf("nhaptuoi sv: ");
	scanf("%d",&x.tuoisv);
	
	printf("thong tin sv: ");
	printf("ten:%s \n",x.tensv);
	printf("tuoi:%d \n",x.tuoisv);
	
	sv t08[25];
	for (int i=0;i<25;i++){
		printf("nhap ten sv: ");
	scanf("%s",t08[i].tensv);
	printf("nhaptuoi sv: ");
	scanf("%d",&t08[i].tuoisv);
	}
	
}
