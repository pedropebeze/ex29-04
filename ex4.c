#include <stdio.h>
int main() {
    double num[3];
    double soma;
    for(int i=0;i<3;i++){
        puts("Digite a nota:");
        scanf("%lf",&num[i]);
        soma+=num[i];
    }
    printf("Total: %.4lf\n",soma);
    return 0;
}
