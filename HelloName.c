#include <stdio.h>

int main(void) {
    char name[50];
    printf("Введите ваше имя: ");
    scanf("%49s", name);
    printf("Привет, %s!\n", name);
    return 0;
}
