// Q: 1 month

#include<stdio.h>
main(){
int i, d, m, b=1, c, a=1;
printf("day");
scanf("%d",&d);
printf("month");
scanf("%d",&m);
for(i=1;i<=(m/7+1);i++){
	for(c=1;c<=7;c++){
    	for(a;a<=d-1;a++){
        	printf("_\t");
        	c=c+1;
    	}
    	if(b<=m){
    		printf("%d\t",b);
    		b=b+1;    
    	}
	}
printf("\n");
}
}
