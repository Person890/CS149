#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

    int result = 0;
    char *a;
    if (argc > 4){
        printf("Too many arguments entered.");
        return 0;
    }
    for(int i = 1; i < argc; i++)
    {
        a = argv[i];
        result += atoi(a);
    }
    printf("The sum is: %d\n", result);
    return 0;
}
