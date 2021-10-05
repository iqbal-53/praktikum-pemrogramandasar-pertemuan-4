#include <stdio.h>
#include <stdlib.h>

void main()
{
    int nilai;
    printf("Masukkan Nilai :");
    scanf("%d",&nilai); //deklarasi input

    if(nilai>=80){
        printf("Nilai Anda : A");
    } else if (nilai <80 && nilai >=75){
        printf("Nilai Anda : B");
    } else if (nilai <75 && nilai >=60){
        printf("Nilai Anda : C");
    } else if (nilai <60 && nilai >=50){
        printf("Nilai Anda : D");
    } else printf ("Nilai Anda : E");//deklarasi logika if else if
}
