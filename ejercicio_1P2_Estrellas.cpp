#include<stdio.h>
#include<stdlib.h>
int main(){
	int x=0;
		printf("introduce el numero de estrellas: ");
		scanf("%d",&x);
			for(int i=0;i<x;i++){
			for(int k=x;k>i;k--){
			printf(" ");
	}
			for(int j=0;j<=i;j++){
			printf("*");
		}
			printf("\n");
		}
}

