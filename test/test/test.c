#include <stdio.h>

int get_cycle_number(int n, int len) {
	len++;
	if (n == 1) {
		printf("%d", n);
		return len;
	}
	else {
		printf("%d ", n);
		if (n % 2 == 0) {
			n = n / 2;
		}
		else {
			n = n * 3 + 1;
		}
		return get_cycle_number(n, len);
	}
}

int main() {
	int n, len = 0;

	scanf_s("%d", &n);
	printf("\n사이클 길이 = %d\n", get_cycle_number(n, len));

	return 0;
}