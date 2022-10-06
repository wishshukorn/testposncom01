// input array

#include<stdio.h>
int main(){
	int i, score[5];
	for(i=0;i<=4;i++){
		printf("Input score %d: ", i);
		scanf("%d", &score[i]);
	}
	for(i=0;i<=4;i++){
		printf("score[%d]: %d\n", i, score[i]);
	}
	printf("%d\n", score[1]);				//2
	printf("%d\n", score[0] + score[4]);	//6
	printf("%d\n", score[2+3]);				//0
	printf("%d\n", score[1]+10);			//12
}
