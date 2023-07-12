#include "main.h"		
#include <stdlib.h>


char *str_concat(char *s1, char *s2) {
    char *concat;
    int i = 0, len1 = 0, len2 = 0, totalLen = 0;

    /* Calculate the length of the first string, s1*/
    while (s1[i] != '\0') {
        len1++;
    }

    i = 0;
    /* Calculate the length of the second string, s2*/
    while (s2[i] != '\0') {
        len2++;
    }

    totalLen = len1 + len2;
    /* Allocate memory for the concatenated string*/
    concat = malloc(sizeof(char) * (totalLen + 1));

    if (concat == NULL)
        return (NULL);

    i = len1 = len2 =  0;

    /* Copy the characters from s1 to concat*/
    while (s1[len1] != '\0') {
        concat[i] = s1[len1];
        i++;
        len1++;
    }

    /* Copy the characters from s2 to concat*/
    while (s2[len2] != '\0') {
        concat[i] = s2[len2];
        i++;
        len2++;
    }

    concat[i] = '\0';

    return (concat);
}

