// 1 2 3\nim done

#include<stdio.h>
int main(){
	int i, j;
	for(i=1;i<=5;i++){
		for(j=1;j<=5;j++){
			printf("%d ", j);
			if(j==3){
				goto jump;
			}
		}
		printf("\n");
	}
	jump:
		printf("\ni'm done");
		return 0;
}
