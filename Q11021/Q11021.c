#include <stdio.h>
#include <stdlib.h>

int main(){
	int testCaseNum;
	scanf("%d",&testCaseNum);
	
	int a,b,i;
	for(i=1;i<=testCaseNum;i++){
		scanf("%d %d",&a,&b);
		printf("Case #%d: %d\n",i,a+b);
	}
	
	return 0;
}
