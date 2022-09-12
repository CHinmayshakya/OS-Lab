#include<stdio.h>
#include<unistd.h>

int main() {
	int array[10] = {1,2,3,4,5,6,7,8,9,10};
	int pid = fork();
	if(pid > 0) {
		int sum = 0;
		printf("Parent Process\n");
		for(int i = 0;i < 10;i++) {
			if(array[i] % 2 == 0){
				sum += array[i];
			}
		}
		printf("Sum even = %d", sum);
		printf("\n");
	}
	else {
		int sum = 0;
		printf("Child Process\n");
		for(int i = 0;i < 10;i++) {
			if(array[i] % 2 != 0){
				sum += array[i];
			}
		}
		printf("Sum odd = %d",sum);
		printf("\n");
	}                                                                                                                             
	return 0;
}
