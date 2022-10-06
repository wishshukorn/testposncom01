// array with me

#include<stdio.h>
main(){
	int i, score[5], sum=0, a=0, f=0;
	for(i=0;i<=4;i++){
		printf("input score [%d]: ", i);
		scanf("%d", &score[i]);
	}
	for(i=0;i<=4;i++){
		printf("score [%d] = %d\n", i, score[i]);
	}
	for(i=4;i>=0;i--){
		printf("score [%d] = %d\n", i, score[i]);
	}
	for(i=0;i<=4;i++){
		sum=sum+score[i];
	}
	printf("sum = %d\n", sum);
	printf("avg = %d\n", sum/5);
	for(i=0;i<=4;i++){
		if(score[i] < 50){
			f++;
		}
		else{
			a++;
		}
	}
	printf("not fail = %d\n", a);
	printf("fail = %d\n", f);
}
