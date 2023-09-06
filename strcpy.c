int strcypComplementor(char *destino, char *origen, int n) {
    if (origen[n] == '\0') {
        destino[n] = '\0';
    } else {
        destino[n] = origen[n];
        strcypComplementor(destino, origen, n + 1);
    }
    return 0;
}


int strcpyCustom(char *destino, char *origen) {
    return strcypComplementor(destino, origen, 0);
    return 0;
}