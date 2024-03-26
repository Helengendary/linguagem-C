#include <stdio.h>

#ifndef FUNCTION_H
#define FUNCTION_H

    void And(int a, int b) {  
        int and = a & b;
        printf("a & b = %d", and);
    }

    void Or(int a, int b) {
        int or = a | b;
        printf("a | b = %d", or);
    }
#endif 
