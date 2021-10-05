#include <stdio.h>
#include <stdlib.h>

void main()
{
    char nilai;
    printf ("Nilai kamu berapa? ");
    scanf ("%c", &nilai);
    switch (nilai)
    {
    case ('A') : printf ("Baik Sekali"); break;
    case ('B') : printf ("Baik"); break;
    case ('C') : printf ("Cukup"); break;
    case ('D') : printf ("Kurang"); break;
    default:printf("Kurang Sekali");break;
    }
}
