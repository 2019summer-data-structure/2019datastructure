#include<stdio.h>
#include <stdlib.h>
#include <time.h>
void array_fill(int* A, int size) {
	int i;
	for (i = 0; i < size; i++) {
		 *(A+i)= rand()%100;
	
		 printf("%d", *(A + i));
	}
}
int main() {
	int n;
	int A;
	scanf_s("%d", &n);
	array_fill(&A, n);
}