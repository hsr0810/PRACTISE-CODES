#include<stdio.h>  // CHARACTER IS DIGIT OR NOT
int main(){
	int c;
	printf("enter any character:");
	scanf("%d",&c);
	if( 1<=c&&c<=9){
		printf("IT IS A DIGIT");
	}
	else{
		printf("IT IS NOT A DIGIT");
	}
	return 0;
}
