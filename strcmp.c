int strcmpComplementor(char *str1, char *str2, int str1n, int str2n) {
    // Is str1 bigger than str2?
    if (str1n > str2n) {
        return 1;
    } else if (str1n < str2n) {
        return -1;
    }

    // Are they equal?
    if (str1[str1n] == '\0' && str2[str2n] == '\0'){
        return 0;
    } else if (str1[str1n] == '\0' && str2[str2n] != '\0') {
        return strcmpComplementor(str1, str2, str1n, str2n + 1);
    } else if (str1[str1n] != '\0' && str2[str2n] == '\0') {
        return strcmpComplementor(str1, str2, str1n + 1, str2n);
    } else {
        return strcmpComplementor(str1, str2, str1n + 1, str2n + 1);
    }

} 

int strcmpCustom (char *str1, char *str2) {
    return strcmpComplementor(str1, str2, 0, 0);
}