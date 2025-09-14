// refer obsidian

#include <stdio.h>
#include <stdlib.h>

int main(){
    // ptr = (cast-type*) malloc(byte-size)
    int *ptr = (int*) malloc(4*sizeof(int));

    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }

    for(int i=0; i<4; i++){
        *(ptr + i) = i;
    }

    for(int i = 0; i<4; i++){
        printf("Position is %d and number stored is %d\n",i, *(ptr+i));
    }

// calloc()

    char *ptr1 = (char*)malloc(4*sizeof(char));
    for (int i = 0; i < 4; i++)
    {
        printf("char at position %d and char is %c\n", i, *(ptr1+i));
    }

    // free(ptr);

    ptr1 = (char*)realloc(ptr1, 10*sizeof(char));

    
    return 0;
}