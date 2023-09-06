#include <stdio.h>

int strlenComplementor(char *s, int n) {
    if (s[n] == '\0') {
        return 0;
    } else {
        return 1 + strlenComplementor(s, n + 1);
    }
}

int strlenCustom(char *s) {
    return strlenComplementor(s, 0);;
}




int main () {

    int prueba = strlenCustom("hola");

    printf("%d", prueba );
    return 0;
}

