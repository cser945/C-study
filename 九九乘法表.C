#include<stdio.h>
#include<stdlib.h>
void main() {
	int i, j;
	for (i = 1; i <= 9; i++) {
		for (j = 1; j <= 9; j++) {
			printf("%2dx%d=%2d", i, j, i * j);
		}
		printf("\n");
	}
}
