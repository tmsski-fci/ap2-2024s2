#include <stdio.h>
#include <string.h>

void trocar(char v[], int i, int j) {
    char tmp = v[i];
    v[i] = v[j];
    v[j] = tmp;
}

void bolha(char v[], int n) {
	for (int i=0; i<n-1; i++) {
		for (int j=0; j<n-1-i; j++) {
			if (v[j]>v[j+1]) {
				trocar(v, j, j+1);
			}
			printf("%s\n", v);
		}
	}
}

int main() {
	char palavra[] = "caxingui";
	int n = strlen(palavra);
	bolha(palavra, n);
	return 0;
}
