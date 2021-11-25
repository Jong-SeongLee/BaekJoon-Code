//백준 2438번 풀이
#include <stdio.h>
int main(){
	int a=0;
	scanf("%d",&a);
	int i, j;
	for(i=0;i<a;i++){
		for(j=0;j<=i;j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
