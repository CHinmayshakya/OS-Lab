#include<stdio.h>
#include<unistd.h>
void main() {
	if(!fork()) {
		fork();
	}
	printf("Hello\n");
}
