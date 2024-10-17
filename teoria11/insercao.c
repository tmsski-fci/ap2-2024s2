#include <stdio.h>
#include <string.h>
#include <stdbool.h>

void trocar(char v[], int i, int j) {
    char tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void insercao(char v[], int n) {
	for (int i=1; i<n; i++) {
		char valor = v[i];
		int j = i-1;
		bool achei = false;
		while(!achei && j >= 0) {
			if (valor < v[j]) {
				v[j+1] = v[j];
				j--;
			}
			else {
				achei = true;
			}
		}
		v[j+1] = valor;
		printf("%s\n", v);
	}
}

int main() {
	char palavra[] = "padronizacao";
	int n = strlen(palavra);
	insercao(palavra, n);
	return 0;
}
