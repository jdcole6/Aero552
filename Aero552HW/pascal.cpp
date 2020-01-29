/*
 * Jack Cole
 * HW 1
 * AERO 552
 *
 * pascal.cpp
 * 	description
 */

int k = 0;

void pascal(int *arr, int n) {

	if (n == k) {
		k = 0;
		return;
	}

	*(arr + k) = formula(n, k);
	k++;
}

int formula(int n, int k) {

	if ((k > n) || (k < 0))
		return 0;

	int numerator = factorial(n);
	int denomenator = factorial(k)*factorial(n - k);

	return numerator/denomenator;
}

int factorial(int n) {

	if (n >= 1)
		return n*factorial(n-1);
	else
		return 1;
}
