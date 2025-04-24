#include <stdio.h>

int main() {
    
    double x[5]={10,20,30,40,50};
    
    for(int i=0;i<=4;i++){
        printf("X[%d] = %.1lf\n",i,x[i]);
    }
    
    return 0;
}
