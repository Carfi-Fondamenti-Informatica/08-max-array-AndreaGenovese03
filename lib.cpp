#include "lib.h"

 float maggiore(float numeri[], int dimensione){
    float max = numeri[0];
    for (int i=1; i<=dimensione; i++){
        if (numeri[i]>max){
            max = numeri[i];
        }
    }
    return max;
}
