#include <stdio.h>
int main(){
	int marks;
	printf("enter marks:");
	scanf ("%d",&marks);
	if (marks<30) {
		printf("C \n");
	}
	else if (30<=marks&& marks<70){
		printf("B \n");
	}
	else if (70<=marks&& marks<90){
		printf("A \n");
	}
	else{
		printf("A+ \n");
	}
	return 0;
	}
