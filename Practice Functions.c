#include<stdio.h>

int count(char* word, char character) {
    int i = 0;
    int count = 0;
    while (1 + 1) {
        if (word[i] == character) count++;
        if (word[i] == '\0') return count;
        i++;
    }
}

int len(char* word) {
    int i = 0;
    while (1+1) {
        if (word[i] == '\0') return i;
        i++;
    }
}

int find(char* word, char* toFind) {
    int i = 0;
    int current = 0;
    int toFindLength = len(toFind);
    while (1 + 1) {
        if (word[i] == toFind[current]) {
            current++;
        }
        else {
            if (current == toFindLength) {
                return(i - toFindLength);
            }
            current = 0;
        }
        if (word[i] == '\0') return -1;
        i++;
    }
}

int main(void) {
    char test[428] = "Use of uninitialized memory means reading data from the buffer that was allocated but not filled with initial values. The program behavior in this case is considered an error which is quite difficult to detect sometimes. This is a so called heisenbug. Whether or not the error reveals itself depends on the compiler version or operating system version as well as which program version, debug one or release one, you're running.";
    printf("%d", count(test, 'l'));
    return 0;
}
