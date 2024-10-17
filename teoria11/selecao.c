#include <stdio.h>
#include <string.h>

void trocar(char v[], int i, int j) {
    char tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void selecao(char v[], int n) {
	for (int i=0; i<n-1; i++) {
		int min = i;
		for (int j=i; j<n; j++) {
			if (v[j]<v[min]) {
				min = j;
			}
		}
		trocar(v, i, min);
		printf("%s\n", v);
	}
}

int main() {
	char palavra[] = "padronizacao";
	int n = strlen(palavra);
	selecao(palavra, n);
	return 0;
}
