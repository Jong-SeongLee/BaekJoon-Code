//백준 1330번 두수 비교하기 풀이 
#include <stdio.h>
int main(){
	int a=0,b=0;
	scanf("%d %d",&a,&b);
	if(a>b) {printf(">");}
	else if(a<b) {printf("<");}
	else {printf("==");}
	return 0;
}
