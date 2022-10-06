// make graph

#include<stdio.h>
main(){
	int a[10], i, b, j;
	for(i=0;i<=9;i++){
		printf("input [%d]: ", i);
		scanf("%d", &a[i]);
	}
	printf("Element\tValue\tHistogram\n");
	for(i=0;i<=9;i++){
		printf("%d\t%d\t", i, a[i]);
		b = a[i];
		for(j=0;j<=b-1;j++){
			printf("*");
		}
		printf("\n");
	}
}
