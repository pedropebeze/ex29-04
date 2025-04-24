#include <stdio.h>


int main() {
    
    double notas[4];
    double total;
    for(int i=0;i<4;i++){
        scanf("%lf",&notas[i]);
        total+=notas[i];
    }
    printf("Total: %.4lf\n",total);
    
    return 0;
}
