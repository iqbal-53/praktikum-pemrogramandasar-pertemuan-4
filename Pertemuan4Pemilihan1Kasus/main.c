#include <stdio.h>
#include <stdlib.h>
//Program Pemilihan 1 Kasus
int main()
{
	int Angka;

	printf("Masukkan sebuah bilangan : ");
	scanf("%d",&Angka);

	if (Angka > 0) // Pemilihan 1 Kasus
	{
		printf("Angka yang Anda masukkan adalah : POSITIF");
                // Statement Benar akan ditampilkan
	}

	return 0;
}
