#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void mostrar(int v[], int n) {
	printf("[ ");
	for (int i=0; i<n; i++) {
		printf("%d ", v[i]);
	}
	printf("]\n");
}

void merge(int v1[], int n1, int v2[], int n2, int v[]) {
	int i1=0, i2=0, i=0;
	while (i1<n1 && i2<n2) {
		if (v1[i1] < v2[i2]) { v[i] = v1[i1]; i++; i1++; }
		else { v[i] = v2[i2]; i++; i2++; }
	}
	while (i1<n1) { v[i] = v1[i1]; i++; i1++; }
	while (i2<n2) { v[i] = v2[i2]; i++; i2++; }
}

void merge_sort(int v[], int n) {
	if (n < 2) { return; }
	int n1, n2;
	n1 = n/2;
	n2 = n - n1;
	int v1[n1], v2[n2];
	for (int i=0; i<n1; i++) { v1[i] = v[i]; }
	for (int i=0; i<n2; i++) { v2[i] = v[n1+i]; }
	merge_sort(v1, n1);
	merge_sort(v2, n2);
	merge(v1, n1, v2, n2, v);
	mostrar(v, n);
}

int main() {
	int numeros[] = { 80, 70, 50, 30, 10, 40, 60, 20};
	int n = sizeof(numeros) / sizeof(int);
	mostrar(numeros, n);
	merge_sort(numeros, n);
	mostrar(numeros, n);
	return 0;
}
