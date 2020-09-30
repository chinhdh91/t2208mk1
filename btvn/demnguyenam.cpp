#include<stdio.h>
#include<string.h>
int main(){
	int count=0;
	char s[20];
	printf("s=");
	scanf("%s",s);
	for (int i=0; i<strlen(s);i++){
		if ((s[i]='u') || (s[i]='e') || (s[i]='o') || (s[i]='a') || (s[i]='i')	)
        count++;
		
	}
	printf("chuoi co %d ki tu nguyen am /n",count);
	
}
