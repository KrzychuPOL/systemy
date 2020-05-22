#include <stdio.h>
#include <stdlib.h>
#include "obj.h"
#include "pola.h"

int main(int argc, char *argv[]) {
    float a, b, H;
    int run = 1, input;

    printf("Kalkulator pol i objetosci - prostokat i prostopadloscian\n\n");

    while (run) {
        printf("%s\n%s\n%s\n%s\n\n%s",
                "1) Pole prostokata",
                "2) Pole prostopadloscianu",
                "3) Objetosc prostopadloscianu",
                "4) Wyjscie z programu",
                "Wybierz opcje: "
        );
        scanf("%d", &input);
        switch (input) {
            case 1:
                printf("%s\n%s", 
                        "Podaj boki prostokata:",
                        "a = "
                );
                scanf("%f", &a);
                printf("b = ");
                scanf("%f", &b);
                printf("\n%s%0.2f\n\n",
                        "Pole prostokata wynosi: ",
                        pole_prostokata(a, b)
                );
            break;
            case 2:
                printf("%s\n%s", 
                        "Podaj boki podstawy prostopadloscianu:",
                        "a = "
                );
                scanf("%f", &a);
                printf("b = ");
                scanf("%f", &b);
                printf("%s\n%s",
                        "Podaj wysokosc:",
                        "H = "
                );
                scanf("%f", &H);
                printf("\n%s%0.2f\n\n",
                        "Pole prostopadloscianu wynosi: ",
                        pole_prostopadloscianu(a, b, H)
                );
            break;
            case 3:
                printf("%s\n%s", 
                        "Podaj boki podstawy prostopadloscianu:",
                        "a = "
                );
                scanf("%f", &a);
                printf("b = ");
                scanf("%f", &b);
                printf("%s\n%s",
                        "Podaj wysokosc:",
                        "H = "
                );
                scanf("%f", &H);
                printf("\n%s%0.2f\n\n",
                        "Objetosc prostopadloscianu wynosi: ",
                        obj_prostopadloscianu(a, b, H)
                );
            break;
            case 4:
                printf("Program konczy prace...\n");
                run = 0;
            break;
            default: break;
        }
    }

    return 0;
}
