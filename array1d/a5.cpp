// a5

#include<stdio.h>
int main(){
	int a[5] = {-1, 6, 9, 2, -9};
	int i, min, j, b[5];
	for(i=0;i<=4;i++){
		if(a[i]<a[i+1]){
			min = a[i];
		}else{
			min = a[i+1];
		}
	}
	printf("%d\n\n", min);
	for(j=0;j<=4;j++){
		if(a[j]<0){
			b[j] = a[j]*(-1);
		}else{
			b[j] = a[j];
		}
		printf("b[%d]: %d\n", j, b[j]);
	}
	return 0;
}
