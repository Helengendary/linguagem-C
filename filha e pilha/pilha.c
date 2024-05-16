#include <stdio.h>
#include "pilha.h"

int main() {
    push(5);
    push(3);
    push(6);
    push(1);
    push(4);
    push(9);
    peek();
    ultimo();
    pop();
    ultimo();
    GetSize();
    get(-5);
}