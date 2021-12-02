#include <stdio.h>

int scan_score();
int filter_score(int score);

int main(){
	int x;
	x=scan_score();
	filter_score(x);
	return 0;
}

int scan_score(){
	int student_score;
	scanf("%d",&student_score);
	return student_score;
}

int filter_score(int score){
	if(score>89&&score<101){
		printf("A");
	}
	else if(score>79&&score<90){
		printf("B");
	}
	else if(score>69&&score<80){
		printf("C");
	}
	else if(score>59&&score<70){
		printf("D");
	}
	else printf("F"); 
	return 0;
}
