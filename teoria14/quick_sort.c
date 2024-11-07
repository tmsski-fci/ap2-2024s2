#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void mostrar(int v[], int ini, int fim) {
	printf("[ ");
	for (int i=ini; i<=fim; i++) {
		printf("%d ", v[i]);
	}
	printf("]\n");
}

void trocar(int v[], int i, int j) {
	int tmp = v[i];
	v[i] = v[j];
	v[j] = tmp;
}

int particionar(int v[], int pos_inicio, int pos_final, int pos_pivo) {
	int esq = pos_inicio;
	int dir = pos_final;
	while (esq <= dir) {
		while (esq <= dir && v[esq] <= v[pos_pivo]) { esq++; }
		while (esq <= dir && v[dir] >= v[pos_pivo]) { dir--; }
		if (esq < dir) { trocar(v, esq, dir); }
	}
	trocar(v, pos_pivo, dir);
	return dir;
}

void quick_sort(int v[], int pos_inicio, int pos_final) {
	if (pos_inicio >= pos_final) { 
		mostrar(v, pos_inicio, pos_final);
		return; 
	}
	int pos_pivo = pos_inicio;
	int nova_pos_pivo = particionar(v, pos_inicio, pos_final, pos_pivo);
	quick_sort(v, pos_inicio, nova_pos_pivo - 1);
	quick_sort(v, nova_pos_pivo + 1, pos_final);
	mostrar(v, pos_inicio, pos_final);
}

int main() {
	int numeros[] = { 80, 70, 50, 30, 10, 40, 60, 20};
	int n = sizeof(numeros) / sizeof(int);
	mostrar(numeros, 0, n-1);
	quick_sort(numeros, 0, n-1);
	mostrar(numeros, 0, n-1);
	return 0;
}
