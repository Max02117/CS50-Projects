#include <stdio.h>

int main(void) {
    int сдача;
    do {
        printf("Введите сумму сдачи: ");
        scanf("%d", &сдача);
    } while(сдача <= 0);
    
    int четвертаки = сдача / 25;
    int остаток1 = сдача % 25;
    
    int дайм = остаток1 / 10;
    int остаток2 = остаток1 % 10;
    
    int никель = остаток2 / 5;
    int цент = остаток2 % 5;
    
    int монет = четвертаки + дайм + никель + цент;
    printf("%d\n", монет);
} 