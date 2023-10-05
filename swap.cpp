#include "swap.h"
char swap(char &x, char y) {
    char temp = x;
    x = y;
    y = temp;
    return x, y;
}
