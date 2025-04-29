#include <stdio.h>

    double media(double n[]);
    double dobro(double n[]);
    double maior(double n[]);

int main() {
    
    double numeros[2];
    puts("Digite um numero: ");
    scanf("%lf",&numeros[0]);
    puts("Digite um numero: ");
    scanf("%lf",&numeros[1]);
    
    printf("\nVetor antes: %.0lf, %.0lf\n",numeros[0],numeros[1]);
    maior(numeros);
    printf("Vetor ordenado: %.0lf, %.0lf\n",numeros[0],numeros[1]);
    printf("\nMedia: %.1lf\n",media(numeros));
    printf("Dobro: %.1lf\n",dobro(numeros));

    printf("\nVetor depois: %.0lf, %.0lf\n",numeros[0],numeros[1]);

    return 0;
}

    double maior(double n[]){
        if(n[0]<n[1]){
            float temp = n[0];
            n[0] = n[1];
            n[1] = temp;
        }

    }
    double media(double n[]){
        return (n[0]+n[1])/2;
    }
    double dobro(double n[]){
        n[0]*=2;
        n[1]*=2;
        return (n[0]+n[1])/2;
    }
