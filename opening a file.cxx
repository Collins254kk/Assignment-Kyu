#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("for.cxx", "r");
    
    if (fptr != NULL) {
        printf("File open successful\n");
        fclose(fptr);
    } else {
        printf("File open unsuccessful\n");
    }

    return 0;    
}