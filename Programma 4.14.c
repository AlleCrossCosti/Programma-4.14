#include <stdio.h>

int main () {
    int byte, cmp2;
    
    byte = 3;
    cmp2 = ~byte + 1;
    
    printf("Compl.a due di %d e %d", byte, cmp2);
    
    return 0;
    
    }
