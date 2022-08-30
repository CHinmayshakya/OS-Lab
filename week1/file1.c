#include<stdio.h>
#include<unistd.h>
void main() {
	printf("1\n");
	fork();
	printf("2\n");
	fork();
	printf("3\n");
	fork();
	
}
