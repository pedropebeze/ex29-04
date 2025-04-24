#include <stdio.h>

    double media(double n[]);
    double dobro(double n[]);

int main() {
    
    double numeros[2];
    puts("Digite um numero: ");
    scanf("%lf",&numeros[0]);
    puts("Digite um numero: ");
    scanf("%lf",&numeros[1]);
    printf("Media: %.2lf\n",media(numeros));


    
    return 0;
}

    double media(double n[]){
        return (n[0]+n[1])/2;
    }
    double dobro(double n[]){
        
    }
