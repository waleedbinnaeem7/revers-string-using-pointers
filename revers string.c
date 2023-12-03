#include <stdio.h>
#include <string.h>

void printReverse(const char *str) {
  
    int l = strlen(str);

   
    const char *p = str + l - 1;

  
    printf("Reversed String: ");
    while (p >= str) {
        printf("%c", *p);
        p--;
    }
    printf("\n");
}

int main() {
    char inputString[100];


    printf("Enter a string: ");
    fgets(inputString, sizeof(inputString), stdin);

    printReverse(inputString);

    return 0;
}
