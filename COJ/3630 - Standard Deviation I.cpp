#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char const *argv[]) {
	int n;

	while (true) {
		scanf("%i", &n);
		if (n == 0) break;

		double desviation = 0.0;
		double sum = 0.0;

		for (int i = 1; i <= n * 2; i += 2) {
			sum += ((double)i - n) * ((double)i - n);
		}
		desviation = sqrt(sum / (n - 1.0));

		printf("%.6f\n", desviation);
	}
	return 0;
}