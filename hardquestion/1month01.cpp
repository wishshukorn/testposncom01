// Q: 1 month

#include<stdio.h>
main(){
	int i, d, m, a;
	printf("day");
	scanf("%d",&d);
	printf("month");
	scanf("%d",&m);
	a = d - 1;
	for(i=1;i<=m;i++){
	  	a++;
	  	for(d;d-1>0;d--){
	        printf("_\t");
	    }
	  	printf("%d\t",i);
	  	if(a%7==0){
	        printf("\n");
	       }
	}
}
