#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int encrypt(int a, int b)
{
    int c = a << b;
    return c;
}

int decrypt(int a, int b)
{
    int c = a >> b;
    return c;
}

int main(int argc, char *argv[])
{
    if (argc < 3 || argc > 4) {
        printf("Usage: %s <function> <integer> <key>\n", argv[0]);
        return 1;
    }
    
    int e = atoi(argv[2]);
    int d = atoi(argv[3]);
    int result;
    
    if (strcmp(argv[1], "encrypt") == 0) {
        result = encrypt(e, d);
        printf("This is the encrypted value: %d\n", result);
    }
    else if (strcmp(argv[1], "decrypt") == 0) {
        result = decrypt(e, d);
        printf("This is the decrypted value: %d\n", result);
    }
    else {
        printf("Unknown function: %s\n", argv[1]);
        return 1;
    }
    
    return 0;
}
