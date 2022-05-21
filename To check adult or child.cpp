#include <stdio.h>
int main(){
	int age;
	printf("enter any age:");
	scanf("%d",&age);
	if (age>=18){
		printf("adult \n");
	}
	else{
		printf("child \n");
	}
	return 0;
}

