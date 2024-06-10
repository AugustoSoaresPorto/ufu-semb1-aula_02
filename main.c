#include <stdlib.h>
#include <stdio.h>

#include "mylib.h"

int a;
int b;
int c;

int main(int argc, char *argv[]){

    if (argc < 3){
        return EXIT_FAILURE;
    }
    a = atoi(argv[1]);
    b = atoi(argv[2]);

    for (int i=0; i<argc; i++){
        printf("argc[%d] = %s\n", i, argv[i]);
    }

    c = soma(a,b);
    printf("a+b = %d\n", c);

    return EXIT_SUCCESS;
}

