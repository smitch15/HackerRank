#include <stdio.h>
#include <stdlib.h>

int fib(int n){
	printf("enter fib\n");
	if (n <= 2){
		printf("enter return 1 statement\n");
		return 1;
	}
	printf("enter return statement func\n");
	return fib(n - 1) + fib(n - 2);
}


int main(){
	for (int i = 4; i < 6; i++)
	printf("%dth term is %d\n", i, fib(i));
	return 0;
}
