#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>

int main(){
	int pid = fork();
	if(pid > 0) {
		printf("Parent Process\n");
		int m;
		fflush(stdin);
		scanf("%d", &m);
		if(m % 2 == 0) {
			printf("It is an Even no");
		}
		else {
			printf("It is an odd no");
		}
		printf("\n");
	}
	else {
		printf("Child Process\n");
		int n;
		fflush(stdin);
		scanf("%d", &n);
		if(n % 2 == 0) {
			printf("It is an Even no");
		}
		else {
			printf("It is an odd no");
		}
		printf("\n");
	}
	return 0;
}
