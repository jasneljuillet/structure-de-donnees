#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

    /*
    Exercie 1
    float tab[50], *p;
    int n, i;

    do {
        printf("Entrer n\n");
        scanf("%d", &n);
    }while( n <= 0 || n > 50);

    p = tab;

    for(i = 0; i < n; i++) {
        printf("Tab[%d]: ", i);
        scanf("%f", p+i);
    }

    printf("Les elements du tablea sont:  \n");

    for( i = 0; i < n; i++) {
        printf("%.2f\t", *(p+i));
    }
    */

    int tab[50],  *p, n, min, i;

    do {
        printf("Entrer n\n");
        scanf("%d", &n);
    }while( n <= 0 || n > 50 );

    p = tab;

    for(i = 0; i < n; i++) {
        printf("Tab[%d]: ", i);
        scanf("%d", p+i);
    }

      printf("Les elements du tablea sont:  \n");

    for( i = 0; i < n; i++) {
        printf("%d\t", *(p+i));
    }

    min = *p;

      for( i = 0; i < n; i++) {
      if( min > *(p+i)) {
        min = *(p+i);
      }
    }


      printf("\nLe plus petit element du tablea est: %d \t", min);
}
