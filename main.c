#include <stdio.h>
#include <math.h>

void add(double first_number, double second_number){
    double result = first_number + second_number;
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void subtract (double first_number, double second_number) {
    double result = first_number - second_number;
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void multiply (double first_number, double second_number) {
    double result = first_number * second_number;
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void divide (double first_number, double second_number) {
    double result = first_number / second_number;
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void power (double first_number, double second_number) {
    double result = pow (first_number,second_number);
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void square_root (double first_number) {
    double result = sqrt(first_number);
    printf("Le résultat de votre opération est : %.2f.\n",result);
}

void percentage (double first_number, double second_number) {
    double result = (first_number * second_number)/100;
    printf("Le résultat de votre opération est : %.2f.\n",result);
}


int main() {
    double first_number;
    double second_number;
    char operator;

    while (1) {

        printf("\nCalculatrice :\n");
        printf("'n1 + n2' pour l'addition\n");
        printf("'n1 - n2' pour la soustraction\n");
        printf("'n1 / n2' pour la division\n");
        printf("'n1 * n2' pour la multiplication\n");
        printf("'n1 ^ n2' pour la puissance\n");
        printf("'n1 r 1' pour la racine carrée\n");
        printf("'n1 p n2' pour le pourcentage\n");
        printf("'n1 q n2' pour quitter\n");
        printf("Entrez votre opération : ");

        scanf("%lf %c %lf", &first_number, &operator, &second_number);

        switch (operator) {
            case '+':
                add(first_number,second_number);
                break;

            case '-':
                subtract(first_number,second_number);
                break;

            case '*':
                multiply(first_number,second_number);
                break;

            case '/':
                if (second_number == 0) {
                    printf("Impossible\n");
                    break;
                }
                else {
                    divide(first_number,second_number);
                    break;
                }

            case '^':
                power(first_number,second_number);
                break;

            case 'r':
                if (first_number < 0) {
                    printf("Impossible\n");
                    break;
                }
                if (second_number != 1) {
                    printf("Format n1 r 1 non respecté...\n");
                    break;
                }
                square_root(first_number);
                break;

            case 'p':
                percentage(first_number,second_number);
                break;

            case 'q':
                printf("Au revoir !\n");
                return 0;

            default :
                printf("Erreur\n");
                break;
        }

    }

}