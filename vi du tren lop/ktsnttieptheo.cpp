#include<stdio.h>

bool ktsnt(int x){
	if(x<2) return false;
	if(x<=3) return true;
	for(int i=1; i<x/2;i++){
		if(x%i==0) return false;
	}
	return true;
}


int snt(int n){
	for (int i=n+1;true;i++){
		if (ktsnt(i)){
					return i;
		}
		
	
	}
}
	

