#include<stdio.h>
#include<string.h>
int main(){
	char s1[20],s2[20];
	printf("s1: ");
	scanf("%s",s1);
	printf("s2: ");
	scanf("%s",s2);
	
	
	printf("chuoi s1:%s \n",s1);
	printf("chuoi s2:%s \n",s2);
	strcat(s1,s2);
	printf("chuoi s1:%s \n",s1);
	printf("chuoi s2:%s \n",s2);
	
	int x=strchr(s1,'l')-s1	;// vi tri l trong s1
	
	printf("vi tri cua l:%d",x);
}
