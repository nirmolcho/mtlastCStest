#include "exam.h"

int recStrcmp(char* st1, char* st2)
{
    /******** DON'T CHANGE ********/
    fx1(); // do not change!!!
    /******************************/

    if (*st1 == NULL && *st2 == NULL) {
        return 0;
    }
    if (*st1 == NULL) {
        return -1;
    }
    if (*st2 == NULL) {
        return 1;
    }
    if (*st1 < *st2) {
        return -1;
    }
    if (*st1 > *st2) {
        return 1;
    }
    return recStrcmp(st1+1, st2+1);
}
